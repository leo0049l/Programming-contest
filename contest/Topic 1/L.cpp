#include <iostream>
#include <cmath>
using namespace std;
int check(int,int);
int main()
{
	int a,b,counter=0;
	cin>>a>>b;
	int comb=1*pow(10,a),temp,out;
	int small=1*pow(10,a-1);
	for(int i=small;i<comb;i++)
	{
	 	temp=i;
		 if(check(a,i)==1)
	 	 counter++;	 	
		if(counter==b)
		{
			for(int q=a-1;q>=0;q--)
			{
				out=temp/(1*pow(10,q));
				cout<<out<<" ";
				temp-=out*pow(10,q);
			}
			break;
		}  
	}	
 return 0;	
}
int check(int c,int n)
{
	int count[c+1];
	int counter=0;
	for(int i=1;i<=c;i++)
	{
		count[i]=0;
	}
	for(int q=c-1;q>=0;q--)
	{	
	 	int num=(n/(1*pow(10,q))); 
	 if(num>c)
	 continue;
	 
	 count[num]++;
	 n-=num*pow(10,q);
	}
	for(int i=1;i<=c;i++)
	{
		if(count[i]==1)
		 counter++;
	}

	if(counter==c)
	 return 1;
	else
	 return 0; 
}
