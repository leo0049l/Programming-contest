#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
 int size;
 cin>>size;
 int ans;
 int answer=-9999999;
 int array[size][size];
 int sum[size][size];
 for(int i=0;i<size;i++)
 {
 	for(int j=0;j<size;j++)
 	{
 		sum[i][j]=0;
		scanf("%d",&array[i][j]);
		if(i>0)
		sum[i][j]+=(array[i][j]+sum[i-1][j]);
		else
		sum[i][j]=array[i][j];
 	}
 }
 for(int i=0;i<size;i++)
 {
 	for(int j=i;j<size;j++)
 	{
 	  ans=0;
	  for(int k=0;k<size;k++)
	  {
	  	if(i<1)
	  	 ans+=sum[j][k];
	  	else
		 ans+=(sum[j][k]-sum[i-1][k]);
		if(ans>answer)
		 answer=ans;
		if(ans<0)
		 ans=0;
	  }	
 	}
 } 
 cout<<answer<<endl;
 return 0;
}
