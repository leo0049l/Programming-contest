#include <iostream>
#include <cstdio>
using namespace std;
const int l=200;
void check(bool visit[][l],int oil[][l],int i,int j)
{
  if( oil[i][j] && !visit[i][j] )
  {
    visit[i][j]= 1;
    check(visit,oil,i-1,j);
    check(visit,oil,i+1,j);
    check(visit,oil,i,j+1);
    check(visit,oil,i,j-1);
    check(visit,oil,i+1,j-1);
    check(visit,oil,i+1,j+1);
    check(visit,oil,i-1,j-1);
    check(visit,oil,i-1,j+1);
  }
}
int main()
{
	int x,y;
	cin>>x>>y;
	while(x!=0)
	{
	  char c;
	  int oil[l][l];
	  bool visit[l][l]={0};
	  for(int i=0;i<x;i++)
	  {
	  	for(int j=0;j<y;j++)
	  	{
	  	  cin>>c;
			if(c=='*')
			oil[i][j]=0;
			else
			oil[i][j]=1;	
	  	}
	  }	int answer=0;
	  	  for(int i=0;i<x;i++)
	  {
	  	for(int j=0;j<y;j++)
	  	{
	  	  if( oil[i][j] && !visit[i][j] ){
          ++answer;
          check(visit,oil,i,j);	
          }
	  	}
	  }	
	  cout<<answer<<endl;
	  cin>>x>>y;
	}
	return 0;
}
