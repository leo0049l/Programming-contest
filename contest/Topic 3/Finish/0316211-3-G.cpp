#include <cstdio>
#include <iostream>
using namespace std;
int box(long long int,long long int*,long long int,long long int,int);
int main()
{
  long long int p,s;
  scanf("%lld%lld",&p,&s);
  long long int* b; b=new long long int [p+1];
  long long int min,max,c=0,sum=0;
  for(int i=1;i<=p;i++)
  {
  	scanf("%lld",&b[i]);
  	sum+=b[i];
  	if(b[i]>0)
  	{
      c++;
      if(c==1)
      {	min=i;}
	  max=i; 	 	
  	}
  }
  long long int l=max+1,r=max+sum,m;
  while(l<r)
  {
   m=(l+r)/2;
  	if(box(m,b,min,max,s))
  	r=m;
  	else
  	l=m+1;	
  }
  cout<<l;
  return 0;
}
int box(long long int m,long long int* b,long long int min,long long int max,int s)
{
  long long int c=max;
  long long int t=m;
  if(t-c<=0) return 0;
  t-=c;
  long long int p=b[c];
  while(c>=min)
  {
    if(t>p)
	{
	 t-=p;
	 c--;
	 p=b[c];	
	}else if(t==p)
	{
	  s--;
	  c--; 
	  if(s==0 && c!=min-1) return 0;
	  t=m;
	  t-=c;
	  p=b[c]; 	
	}else
	{
	  p-=t;
	  s--;
	  if(s==0 && c!=min-1) return 0;
	  t=m;
	  t-=c;	
	}	
  } 
  return 1;	
}
