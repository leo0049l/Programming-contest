#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int check[5000]={0};
int main(void)
{
	int a,b,answer=0;
	int m,n;
	cin>>a>>b;
	vector<int> graph[5000];
	for(int i=0;i<b;i++)
	{
		cin>>m>>n;
		graph[m].push_back(n);
	}
	for(int i=1;i<=a;i++) 
	{
		for(m=0;m<graph[i].size();m++)
	    {
			int c=graph[i][m];
			for(n=0;n<graph[c].size();n++)
			{
			 check[graph[c][n]]++;
		    }
		}
		for(m=1;m<=a;m++) 
		{
			if(i!=m)
			{
			 answer+=check[m]*(check[m]-1)/2;
		    }
			check[m]=0;
		}
	}
	cout<<answer<<endl;
 return 0;	
}
