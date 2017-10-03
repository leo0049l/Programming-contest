#include <iostream>
#include <cstdio>
using namespace std;
int number[100001];
bool visit[100001]={0};
int main()
{
 int n,k;
 cin>>n>>k;
 for(int i=1;i<=n;i++)
 {
  cin>>number[i];	
 }
 int counter=0,ans=1;
 for(int i=1;i<=n;i++)
 {
  if(visit[number[i]]==0)
  {
   visit[number[i]]=1;
   counter++;	
  }
  if(counter==k)
  {
   for(int j=1;j<=n;j++)
   {
   	visit[j]=0;
   }
   counter=0; ans++;	
  }	
 }
 cout<<ans<<endl;
 return 0;	
}
