#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int input;
int ans=100000000;
int c[201]={0};
int g=0;
struct table
{  
  int leg;
  int cost;
};
void answer(table* t);
bool compare(table const & a,table const & b)
{
    return a.leg<b.leg;
}
int main()
{  
   scanf("%d",&input);
   table t[input];
   for(int i=0;i<input;i++)
	scanf("%d",&t[i].leg);
   for(int i=0;i<input;i++) 
	{
	scanf("%d",&t[i].cost);
	g+=t[i].cost;
    }
   sort(t,t+input,compare); 
   answer(t); 
 return 0;	
}
void answer(table* t)
{
  int i=0;
  while(i<input)
  {
  	int a,num=0;
	int cost=0;
	for(a=i;t[a].leg==t[i].leg;a++){num++;g-=t[a].cost;}
	cost=g;
	num--;
	int b=a; 
	 num=i-num;
	 for(int z=1;z<=200&&num>0;z++)
	 {
		   cost+=min(num,c[z])*z;  
         num-=c[z];  
	 } 
	 for(a=i;t[a].leg==t[i].leg;a++){c[t[a].cost]++;};
	 ans=min(ans,cost);
	 while(t[i+1].leg==t[i].leg)
	 {
	  i++;
	  if(i>input)
	  break;
     }
	 i++;
  }
  printf("%d",ans); 	
} 
