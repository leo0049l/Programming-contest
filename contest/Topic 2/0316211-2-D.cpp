#include <iostream>
#include <cstring>  	

using namespace std;
void answer(string);
int main()
{
	int input;
	cin>>input;
     string test;
	for(int i=0;i<input;i++)
	{
	 cin>>test;
	 answer(test);  
	}
	return 0;
}
void answer(string test)
{
  	 long long int lm=1,ls=0,rm=0,rs=1,nm=1,ns=1;
	    
  	for(int i=0;test[i]!='\0';i++)
  	{
  		if(test[i]=='L')
  		{
  		    rm=nm; rs=ns;
  		    nm=nm+lm; ns=ns+ls;
  		}
  		if(test[i]=='R')
  		{
  		   lm=nm; ls=ns;
			nm=nm+rm; ns=ns+rs;    	
  		}
  	}
  	cout<<ns<<"/"<<nm<<endl;
}
