#include <cstdio>
using namespace std;
int check(int,int*,int,int,int);
int main()
{
	int pile,student;
	scanf("%d%d",&pile,&student);
	int* box;
	box = new int [pile+1];
	int t; int c=0;int f;int sum=0;
	for(int i=1;i<=pile;i++)
	{
	 scanf("%d",&box[i]);
	 sum=sum+box[i];
	 if(box[i]>0)
	 {
	 c++;
	 if(c==1)
	 f=i; 
	 t=i;
     }
	}
	 int l=t+1,r=t+sum,m;
	 printf("%d %d",l,r);
	 while(l<=r)
	 {
	 	m=(l+r)/2;
	 	if(check(m,box,student,t,f)==1)
	 	 r=m;	
	 	else
	 	 l=m;
	 }
 //    printf("%d",m);
	return 0;
}
int check(int t,int* b,int s,int last,int first)
{
 if(t-last<=0)
 return 0;
  int time=t;
  int i=last;
  time-=i;
  int temp;
  temp=b[i];
   while(i!=first-1)
   {
   	if(time>temp)
   	{
   	 time-=temp;
	 i--;
	 temp=b[i];		
   	}else if(time==temp)
   	{
	 s--;
	 i--;
	 temp=b[i];
	 time=t;		
   	}else
   	{
   	 temp-=time;
	 s--;
	 if(s==0&& i>=first) return 0;
	 time=t;
	 time-=i;	
   	}
   }	
 
 
 return 1;
} 
