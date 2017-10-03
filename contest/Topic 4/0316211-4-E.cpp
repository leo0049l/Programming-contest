#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
 int m,n;
 cin>>m>>n;
 while(m!=0 && n!=0)
 {
 	 int array[m][n];
 	 int sum[m][n];
 	 int area=-999;
 	 int temp;
 	 int counter;
 	 int ans;
	 for(int i=0;i<m;i++)
 	{
 		  int j;
		 for(j=0;j<n;j++)
 		{
 		   sum[i][j]=0;
		   scanf("%d",&array[i][j]);	 
		if(i>0)
		sum[i][j]+=(array[i][j]+sum[i-1][j]);
		else
		sum[i][j]=array[i][j];
 		}
 	} 
 	 for(int i=0;i<m;i++)
 {
 	for(int j=i;j<m;j++)
 	{
 	  ans=0;
 	  counter=0;
	  for(int k=0;k<n;k++)
	  {

		if(i<1)
	  	 ans+=sum[j][k];
	  	else
		 ans+=(sum[j][k]-sum[i-1][k]);
		if(ans==0)
		 {
          temp=j-i+1;
          counter++;
	     }
		 else
		 {
	      ans=0;
		  temp=temp*counter;
		  area=max(area,temp);
		  counter=0;	
		 }
		 if(k==n-1)
		 {
		  ans=0;
		  temp=temp*counter;
		  area=max(area,temp);
		  counter=0;	
		 }
	  }	
 	}
 } 
  if(area!=-999)
  cout<<area<<endl;
  else
  cout<<"0"<<endl;
  cin>>m>>n;	
 }
 return 0;	
} 
