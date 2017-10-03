#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
struct line
{
  int x;
  int y;	
};
bool compare(line a,line b)
{
  return a.x<b.x;	
}
int main()
{
 int input,i;
 cin>>input;
 while(input)
 {
 	int m;
 	int left=0;
 	line temp;
 	temp.x=0;
 	temp.y=-1;
 	line ans[100001];
 	int a=-1;
 	line p[100001];
 	cin>>m;
 	for(i=0;i<100001;i++)
 	{
 	 scanf("%d%d",&p[i].x,&p[i].y);
	 if(p[i].x==0 && p[i].y==0)
	 break;	
 	}
 	sort(p,p+i,compare);
 	for(int j=0;j<i;j++)
 	{
 	  if(p[j].x<=left &&p[j].y>=left)
 	  {
 	   	if(p[j].y>=temp.x)
 	   	{
 	   	 temp.x=p[j].y;
	     temp.y=j;	
 	   	}
 	  }
 	  if(j==i-1)
 	  {
 	   if(temp.y==-1)
 	    {
		a=-1;
		break;
	    } 
	   a++;
	   ans[a].x=p[temp.y].x;
	   ans[a].y=p[temp.y].y;
	   if(ans[a].y>=m)
	   break;
	   j=temp.y;
	   temp.y=-1;
	   left=temp.x;
 	  }
 	}
 	if(a==-1 || ans[a].y<m)
	 cout<<"0"<<endl<<endl;
	 else
	 {
	  cout<<a+1<<endl;
	  for(int k=0;k<=a;k++)
	  {
 	   cout<<ans[k].x<<" "<<ans[k].y<<endl;	
	  }cout<<endl;	
	 }   
	input--;
 } 
} 
