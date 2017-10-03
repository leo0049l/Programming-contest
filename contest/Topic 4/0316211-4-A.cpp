#include <iostream>
#include <cstdio>
using namespace std; 
int main()
{
	int number;
	int answer=-2;
	cin>>number;
	while(number!=0)
	{
	 int stack[number];
	 int sum[number];
	 int answer=-1;
	 for(int i=0;i<number;i++)
	 {
		 scanf("%d",&stack[i]);
	 	 if(i==0)
	 	 sum[i]=stack[i];
	 	 else
	 	 {
	 	  if(sum[i-1]+stack[i]>stack[i])
		   sum[i]=stack[i]+sum[i-1];
		  else 	
		   sum[i]=stack[i]; 
	 	 }
	 	 answer=max(answer,sum[i]);
	 }	
	 if(answer>0)
	 cout<<"The maximum winning streak is "<<answer<<"."<<endl;	
	 else
	 cout<<"Losing streak."<<endl;
	 cin>>number;		
	}	
 return 0;	
}
