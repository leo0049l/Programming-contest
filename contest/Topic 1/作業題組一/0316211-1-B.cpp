#include <iostream>
using namespace std;
int check(int ,int );
int main()
{
	int input=1;
	bool first=true;
	cin>>input;
	while(input!=0)
	{
		if(first)
		{
			first=false;
		}
		else
		{
			cout<<endl;
		}
	int i,j,counter=0; 
	for(i=12345;i<=98765;i++)
	{
	  if(i%input==0)
	  {
	   j=i/input;
	   if(check(i,j)==1)
	   {
	   	cout<<i<<" / ";
	   	if(j<10000)
	   	{
	   	 cout<<"0";	
	   	}
	   	cout<<j<<" = "<<input<<endl;
	    counter++;
			}
	  
	  }	  	
	}
	if(counter==0)
	{
	 cout<<"There are no solutions for "<<input<<"."<<endl;	
	}
     cin>>input;
	}
return 0;	
}
int check(int a,int b)
{
  int number[10]={0};
  int counter=0;
  for(int i=1;i<=5;i++)
  {
  	
	number[a%10]++;
  	a=a-a%10;
	a=a/10;   
  }
  for(int i=1;i<=5;i++)
  {
  	number[b%10]++;
  	b=b-b%10;
  	b=b/10;
  }
  for(int i=0;i<10;i++)
  {
  	if(number[i]==1)
  	{
  	 counter++;	
  	}
  }
  if(counter==10)
  {
  	return 1;
  }
  else
  {
  	return 0;
  }	  	
} 
