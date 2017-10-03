#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
struct position
{
 int a;
 int b;	
};
bool compare(position const & x,position const & y)
{
    return x.a<y.a;
}
int q[1000000],r[1000000];
int main()
{
  int n,m;
  scanf("%d%d",&n,&m);
  position* c;
  c = new position [n];
  for(int i=0;i<n;i++)
  {
  	scanf("%d",&c[i].a);
  	c[i].b=i;
  }
  sort(c,c+n,compare);
  for(int i=0;i<n;i++)
  {
  	q[c[i].b]=i;
  	r[i]=c[i].a;
  }
  int counter=0;
  while(counter!=m)
  {
  	int s,l,l2,l3;
    int temp,ans;
    int move=1;
    scanf("%d%d",&s,&l);
  	s--;
  	s=q[s];
  	l2=r[s]+l*move;
  	temp=upper_bound(r,r+n,l2)-r-1;
  	l-=abs(r[temp]-r[s]);
  	s=temp;
  	move*=-1; 
  	while(1)
  	{
  	 l2=r[s]+l*move;
  	 if(move==-1)
  	 {
  	  temp=lower_bound(r,r+n,l2)-r;	
  	 }
  	 else
  	 {
  	  temp=upper_bound(r,r+n,l2)-r-1;	
  	 }
  	 if(temp==s) break;
  	 l3=abs(r[temp]-r[s]);
  	 if((l/l3)%2==1)
  	 {
  	  move*=-1;
	  s=temp;		
  	 }
  	  l%=l3;
  	}
  	ans=c[s].b+1;
  	printf("%d\n",ans);
  	counter++;
  } 		
 return 0;	
}
