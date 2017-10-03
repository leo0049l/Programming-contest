#include <iostream>
#include <cstdio>
using namespace std;
int d[30001];
int e[30001];
int r(int a)
{
 if(a==d[a])
 return a;
 else
 {
  d[a]=r(d[a]);
  return d[a];	
 }		
}
int main()
{
  int input;
  int n,m,a,b;
  cin>>input;
  while(input)
  {
   cin>>n>>m;	

   for(int i=1;i<=n;i++)
   {
   	d[i]=i;
   	e[i]=1;
   }
   for(int i=0;i<m;i++)
   {
   	cin>>a>>b;
   	a=r(a);
   	b=r(b);
   	if(a!=b)
   	{
   	 d[a]=b;
	 e[b]+=e[a];	
   	}
   }	
  int ans=0;
  for(int i=1;i<=n;i++)
  {
  	if(e[i]>ans)
  	{
  	 ans=e[i];	
  	}
  }	
   cout<<ans<<endl;
   input--;	
  }
  

 return 0;	
}
