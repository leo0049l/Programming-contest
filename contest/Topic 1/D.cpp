#include <iostream>
using namespace std;
int check(char*);
int main()
{
  char* str;
  str=new char[1000000];
  cin>>str;
  if(check(str)==1)
  {
  	cout<<"YES"<<endl;
  }
  else
  {
  	cout<<"NO"<<endl;
  }
  return 0;	
}
int check(char* str)
{
  int ab=0,ba=0,i;
  int ab1=0,ba1=0;
  for(i=0;str[i]!='\0';i++)
  {
    if(ab==0 && ba==0)
    {
     if(str[i]=='A')
	 {
	   if(str[i+1]=='B')
	   {
         ab++;
	   	 i+=1;
	   }	
	 }	
	 else if(str[i]=='B')
	 {
	   if(str[i+1]=='A')
	   {
	   	 ba++;
	   	 i+=1;
	   }	
	 }	
    }else if(ab==1 && ba==0)
    {
     if(str[i]=='B')
      {
	   if(str[i+1]=='A')
	   {
		 ba++;  i+=1; 
	   }	
	 }	 	
    }else if(ab==0 && ba==1)
    {
    	if(str[i]=='A')
      {
	   if(str[i+1]=='B')
	   {
	   	 ab++;  i+=1; 
	   }	
	 }	 	
    } 
  }
  
   for(;i>=0;i--)
  {
   if(ab1==1 && ba1==0)
   {
   	if(str[i]=='A')
	 {
	   if(str[i-1]=='B')
	   {
         ba1++;
	   	 i-=1;
	   }	
	 }	
	
   }else if(ab1==0 && ba1==1)
   {
     if(str[i]=='B')
	 {
	   if(str[i-1]=='A')
	   {
	   	 ab1++;
	   	 i-=1;
	   }	
	 }	
   }else
   {
   	if(str[i]=='A')
	 {
	   if(str[i-1]=='B')
	   {
         ba1++;
	   	 i-=1;
	   }	
	 }	
	 else if(str[i]=='B')
	 {
	   if(str[i-1]=='A')
	   {
	   	 ab1++;
	   	 i-=1;
	   }	
	 }	
   }
      
  }
 
   if(ab>=1 && ba>=1)
  {
  	return 1;
  }else if(ab1>=1 && ba1>=1 )
  {
  	return 1;
  }else
   return 0;
  }

