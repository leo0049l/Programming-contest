#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
  int x,y;
  int counter=0;
  cin>>x>>y;
  char r;
  int ans=0;
  int s[x][y];//original
  int q[x][y];//change;
  for(int i=0;i<x;i++)
  {
  	for(int j=0;j<y;j++)
  	{
  	 scanf(" %c",&r);
	 if(r=='W')
	 s[i][j]=1;
	 else
	 s[i][j]=-1;
	 q[i][j]=0;  	
  	}
  }
    int a=-1,b=-1;
    int tx=x-1,ty=y-1;
	for(int i=0;i<=tx;i++)
  {
  	for(int j=0;j<=ty;j++)
  	{
     if(q[i][j]!=s[i][j])
	 {
	  a=i; b=j;	
	 }
	 if(i==tx && j==ty)
	 {
	  if(a==-1 && b==-1)
	   {
	    counter=1;
	    break;
       }
	  int temp=s[a][b]-q[a][b];
	  for(int c=a;c>=0;c--)
	  {
	  	for(int d=b;d>=0;d--)
	  	{ 	
		  q[c][d]+=temp;	
	  	}
	  }	ans++;
	  i=0; j=-1;  a=-1; b=-1;
	 }  	
  	}
  	if(counter==1)
  	break;
  }
  cout<<ans<<endl;
  return 0;	
} 

