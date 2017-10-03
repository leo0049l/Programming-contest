#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
	int n,l;
	cin>>n>>l;
	int lattern[n];
	for(int i=0;i<n;i++)
	{
	  cin>>lattern[i];	
	}
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
		 
		 if(lattern[j]>lattern[j+1])
		  {
		  	int temp;
		  	temp=lattern[j];
		  	lattern[j]=lattern[j+1];
		  	lattern[j+1]=temp;
		  }
		}
	}
	int ans=0; int temp;
	int ll=lattern[0];
	int r=lattern[n-1];
	temp=max(ll-0,l-r);
	for(int i=0;i<n-1;i++)
	{
	  ans=max(lattern[i+1]-lattern[i],ans);	
	}
	double a;
	if(temp>ans/2)
	 {
	 ans=temp;
	 a=(double)ans;
     }
	else
	{
	  a=(double)ans;
	  a=a/2;	
	}   
    cout<<fixed<<setprecision(9)<<a<<endl;
	
	
 return 0;	
} 
