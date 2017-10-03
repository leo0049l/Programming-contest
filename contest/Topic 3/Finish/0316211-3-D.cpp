#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int ans[1000001];
int main()
{
	int a; scanf("%d",&a);
	int b[a+1]; int j=1;
	for(int i=1;i<=a;i++)
	{
       int k=1;
	   scanf("%d",&b[i]);		
	   while(k<=b[i])
	   {
	   	 ans[j]=i;
	   	 j++;
	   	 k++;
	   }
	} 
	int c; scanf("%d",&c);
	int d[c+1];
	for(int i=1;i<=c;i++)
	{
		scanf("%d",&d[i]);
        printf("%d\n",ans[d[i]]);
	}
 return 0;	
}

