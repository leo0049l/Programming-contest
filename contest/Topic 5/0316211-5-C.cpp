#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  while(n!=0)
  {
  	int a,b,counter=0;
  	vector<int> graph[101];
  	int check[101]={0};
    vector<int> t;
  	for(int i=0;i<m;i++)
  	{
  	  cin>>a>>b;
	  graph[a].push_back(b);
	  check[b]++;		
  	}
  	for(int i=n;i>0;i--)
  	{
	  if(check[i]==0)
	  {
	  	counter++;
	  	t.push_back(i);
	  	if(counter<n)
	  	 cout<<i<<" ";
	  	else
		 cout<<i<<endl;
		check[i]=-1;  
	  }
	  if(counter==n) 
	   break;
	  else if(i==1)
	  {
         i=n+1;
       for(int k=0;k<t.size();k++)
	   {
	   	for(int j=0;j<graph[t[k]].size();j++)
		{
		 check[graph[t[k]][j]]--;	
		} 
	   }
	   t.clear(); 
      }
  	}	
   cin>>n>>m;	
  }	
return 0;	
}
