#include <iostream>
#include <cstdio>
using namespace std;
int people[30000];
int f(int a)
{
	if(a!=people[a])
	 people[a]=f(people[a]);	
	return people[a];
}
int main()
{
 int n;
 cin>>n;	
 for(int i=0;i<2*n;i++)
 {
  people[i]=i;
 }
 int c,x,y;
 scanf("%d%d%d",&c,&x,&y);
 while(c)
 {
  int a1=f(x);
  int a2=f(x+n);
  int b1=f(y);
  int b2=f(y+n);
  if(c==1)
  {
   if(a1==b2) 
	cout<<"-1"<<endl;  
   else
    {  
     people[a1] = b1;  
     people[a2] = b2;  
    } 
  }  
  if(c==2)
  {
  if ( a1 == b1 )
	cout<<"-1"<<endl;    
  else 
	{  
     people[a1] = b2;  
     people[a2] = b1;  
    } 
  }  
  if(c==3)
  {
  	if(a1==b1)
	 cout<<"1"<<endl;    
    else 
	 cout<<"0"<<endl;
  }   
  if(c==4)
  {
  	if(a1==b2) 
	  cout<<"1"<<endl;    
    else 
	  cout<<"0"<<endl;
  }
	scanf("%d%d%d",&c,&x,&y);		     
}
 return 0;	
}
