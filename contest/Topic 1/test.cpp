#include <iostream>
using namespace std;
int main()
{
 char a[2][19];
for(int i=0;i<19;i++)
	  {
	  	for(int j=0;j<19;j++)
	  	{
		  cin>>a[i][j];	
	    }
	  }
cout<<endl<<endl<<endl;
 for(int i=0;i<19;i++)
	  {
	  	for(int j=0;j<19;j++)
	  	{
		  cout<<a[i][j];
          	
	  	}
	  	
	  }
 return 0;	
}
