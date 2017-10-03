#include <iostream>
#include <cstdio>
using namespace std;
int c[5000]={0};
int main(void)
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	 cin>>c[i];
    }
    int j,k=0,ans=0;
	for(int i=1;i<=n;i++)
	{
		for(j=i,k=1;j!=-1;k++,j=c[j])
		{
			if(k>ans)	
			{
			ans=k;
		    }
	    }
	}
	cout<<ans<<endl;
 return 0;	
}
