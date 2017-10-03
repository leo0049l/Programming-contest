#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,x; 
	scanf("%d%d",&n,&x);
	int n2=n*2;
	int cup[n2];
	for(int i=0;i<n2;i++)
	{
	scanf("%d",&cup[i]);	
	}
	sort(cup,cup+n2);
	double a=cup[0];
	double b=cup[n2/2];
	double sum;
	if(a*2<b)
	{
	  sum=a*(n2/2)+a*2*(n2/2);	
	}
	else
	{
	 sum=b/2*(n2/2)+b*(n2/2);	
	}
	if(x<sum)
	{
	 sum=(double)x;	
	}
	printf("%f",sum);
	 return 0;
} 
