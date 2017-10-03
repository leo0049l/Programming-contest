#include <iostream>
using namespace std;
int check(int*,int);
int main()
{
	int input;
	cin>>input; int* stack; 
	while(input>0)
	{
	   	int i;
	    stack= new int [input];
	   while(1)
	   {
		 for(i=0;i<input;i++)
	   	 {
		   cin>>stack[i];
		   if(stack[0]==0)
		    break;	
	   	 } 
	   	  if(stack[0]==0)
	   	   {
			break;
		   }
	   	  if(check(stack,input)==1)
			 cout<<"Yes"<<endl;
		  else
		     cout<<"No"<<endl;
	   }cout<<endl; cin>>input;	delete [] stack;
	}	
 return 0;	
}
int check(int* stack,int n)
{
  int position=-1;
  int array[n+1];
  int counter;
  for(int i=0;i<=n;i++)
   array[i]=-1;
  for(int i=0;i<n;i++)
  {
  	if(i==0)
  	{
  		position=stack[i];
  		array[position]=1;
  	}
  	else
  	{
  	  if(stack[i]>stack[i-1])
		{
		 position=stack[i];
  		 array[position]=1;	
		}
	  else
	    {
	        counter=0;
			while(counter!=1)
	        {
		  	position--; 

			if(array[position]==-1 && stack[i]!=position)
	      	 return 0;
	      	if(array[position]==-1 && stack[i]==position)
			  {
			  array[position]=1; counter++; 
			  } 
	        }
	    }		
  	}
  } return 1; 
} 
