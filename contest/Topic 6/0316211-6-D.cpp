#include <cstdio>
#include <iostream>
using namespace std;
int parent[30001];
int child[30001];
int degree[30001];
int f(int a)
{
 int t;
 if(a==parent[a])
 {
 	return a;
 }
 else
 {
  t=parent[a];
  parent[a]=f(t);
  degree[a]+=degree[t];
  return parent[a];	
 }
}
int main()
{
	int p;
	cin>>p;
	for(int i=1;i<=30000;i++)
	{
	 parent[i]=i; child[i]=1; degree[i]=0;	
	}
	char q; int a,b,c;
	for(int i=0;i<p;i++)
	{
	 cin>>q;
	 if(q=='M')
	 {
	  cin>>a>>b;
	  int r1,r2;
	  r1=f(a);
	  r2=f(b);
	  if(r1!=r2)
	  {
	  	parent[r2]=r1;
	  	degree[r2]=child[r1];
	  	child[r1]+=child[r2];
	  }	
	 }
	 else
	 {
	 	cin>>c;
	 	cout<<child[f(c)]-degree[c]-1<<endl;
	 }	
	}
	return 0;
}

