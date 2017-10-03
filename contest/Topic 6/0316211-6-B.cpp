#include <iostream>
#include <cstdio>
using namespace std;
int array1[100001],array2[100001];
int f(int a)
{
  if(a==array1[a]) 
  return a;
  else
  {
    int b=array1[a];
    array1[a]=f(array1[a]);
    array2[a]=(array2[a]+array2[b])%2;
    return array1[a];
  }
}
int main()
{
  int input;
  int n,m;
  cin>>input;
  while(input)
  {
  	cin>>n>>m;
  	scanf("%*c");
  	for(int i=1;i<=n;i++)
  	{
  	 array1[i]=i;
	 array2[i]=0; 	
  	}
  	while(m)
  	{
  	 char c,space;
  	 int a,b;
  	 scanf("%c%d%d%*c",&c,&a,&b);
  	 if(c=='A')
  	 {
  	   if(f(a)==f(b))
		 {
		  if(array2[a]!=array2[b])
		  {
		  	cout<<"In different gangs."<<endl;
		  }
		  else
		  {
		  	cout<<"In the same gang."<<endl;
		  }	
		 } 
		else
		{
		 cout<<"Not sure yet."<<endl;	
		} 	
  	 }
  	 else if(c=='D')
  	 {
  	  int x=f(a);
	  int y=f(b);
	  array1[x]=y;
	  array2[x]=(array2[a]+array2[b]+1)%2;		
  	 }
	 m--;	
  	}
  	input--;
  }	
 return 0;	
} 
