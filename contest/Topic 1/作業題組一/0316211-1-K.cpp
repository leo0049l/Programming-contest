#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
unsigned int light[10];
int check();
int bit(unsigned int);
int change(int);
int main(void)
{
  char* bulb[10];
  char* name;  
  name=new char [10];
  cin>>name;
  while(strcmp(name,"end")!=0)
  {
	 for(int i=0;i<10;i++)
  	{
  	  bulb[i]=new char [10];
	  cin>>bulb[i];
	  light[i]=0;
	  for(int j=0;j<10;j++)
	  {
	  	if(bulb[i][j]=='O')
          light[i]+=1*pow(2,9-j);
	  }	
  	}
  	cout<<name<<" "<<check()<<endl;
    cin>>name;
  }
 return 0;  	
}
int check()
{
   	int ans=101; 
	for(int j=0;j<1024;j++)
   	 {
   	 unsigned int temp[10]={0};
     unsigned int move[10]={0};
     int answer=0;
	    move[0]=j;
	    temp[0]=light[0]^change(move[0]);
        temp[1]=light[1]^move[0];
		if(temp[0]==0)
         move[1]=0;
        else
		 move[1]=temp[0];
		 for(int i=1;i<9;i++)
	    {
	      temp[i]=temp[i]^change(move[i]);
          temp[i+1]=light[i+1]^move[i];
		if(temp[i]==0)
         move[i+1]=0;
        else
		 move[i+1]=temp[i];
	    }
         temp[9]=temp[9]^change(move[9]);
	  if(temp[9]==0)
	  {
	  	for(int c=0;c<10;c++)
	  	{
	  	 answer+=bit(move[c]);	
	  	}
        ans=min(ans,answer);
	  }	  	  	
   	 }
   	 if(ans==101)
   	 return -1;
   	 else
   	 return ans;
}
int bit(unsigned int n)
{
   int count=0;
   while(n)
   {
      count++;
      n&=n-1;
   }
   return count ;
}
int change(int n)
{
	int a[10]={0}; int ans=0; int b[10]={0};
	for(int i=0;i<10;i++)
	{
	 a[i]=((n>>i)&1);	
	}
	for(int i=0;i<10;i++)
	{
		if(a[i]==1)
		{
			 b[i]++;
			if(i-1>=0)
			{
			 b[i-1]++;
			}
			if(i+1<10)
			{
			   b[i+1]++;
			}  
		}
	}
	for(int i=0;i<10;i++)
	{
	 if(b[i]%2==1)
	 {
	  ans+=1*pow(2,i);	
	 }	
	}
	return ans;
}
