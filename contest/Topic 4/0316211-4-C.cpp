#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
 int input,field;
 cin>>input;
 int counter=1;
 while(input)
 {
  cin>>field;
  int answer=0;
  char crow[field];
  for(int i=0;i<field;i++)
   scanf(" %c",&crow[i]); 
  for(int i=0;i<field;i++)
  {
   if(i==field-1 && crow[i]=='.')
   {
   	answer++;
   }
   else if(crow[i]=='#')
    {
     continue;
	}
   else if(crow[i]=='.')
   {
   	if(crow[i+1]=='.' && i+1<field)
   	{
   	 i+=2;
	 answer++;
   	}
	else if(crow[i+1]=='#' && i+1<field)
   	{
   	 if(crow[i+2]=='.' && i+2<field)
	  {
		i+=2;
	  	answer++;	
	  }
	 else if(crow[i+2]=='#' && i+2<field)
	 {
	  i+=2;
	  answer++;
	 }else if(i+2==field)
	 {
	  answer++;
	  i+=2;	
	 } 	
   	}
   }		
  }
  cout<<"Case "<<counter<<": "<<answer<<endl; 	
 input--;counter++;	
 }		
 return 0;	
} 
