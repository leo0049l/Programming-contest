#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
void quick();
int main()
{
  int n;
  scanf("%d",&n);
  int people[n+1];
  int sort1[n+1];
  for(int i=1;i<=n;i++)
  {
  	scanf("%d",&people[i]);
  	sort1[i]=people[i]+i;
  }	
 sort(sort1+1,sort1+n+1);
 for(int i=1;i<=n;i++)
 {
 	sort1[i]-=i;
 } int check=0;
 for(int i=1;i<n;i++)
 {
 	if(sort1[i]>sort1[i+1])
 	 {
	   printf(":(");
	   break;
     }
 	else
 	 check++;
 }
 if(check==n-1)
 {
 	for(int i=1;i<=n;i++)
 	{
 		printf("%d ",sort1[i]);
 	}
 }
 return 0;	
}

