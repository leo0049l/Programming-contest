#include <iostream>
#include <cstdio>
using namespace std;
const int l=201;
void check(int,int,int[][l],int[l]);
int main()
{
	int n;
	cin>>n;
	while(n)
	{
	 int maps[l][l]={0};	

	 int a,b,c,d;
	 cin>>a;
	 while(a)
	 {
	   cin>>b;
	   while(b)
	   {
	   	maps[a][b]=1;
	   	cin>>b;
	   }
	   cin>>a;	
	 } 
	 cin>>c;
	 for(int i=0;i<c;i++)
	 {
	  	int available[l]={0};
		cin>>d;	 	
	  	check(d,n,maps,available);
	  	int counter=n;  
        for(int j=1;j<=n;j++)  
        {
         counter-=available[j];
	    }
        cout<<counter;  
        for(int j=1;j<=n;j++)
		{  
         if(available[j]==0)  
         cout<<" "<<j;
	    }
         cout<<endl;  
	 }	
	 cin>>n;	
	}
 return 0;	
}
void check(int d,int n,int maps[][l],int available[l])
{
	for(int i=1;i<=n;i++)  
    {    
	 if(available[i]==0 && maps[d][i]==1) 
	 {  
        available[i]=1;  
        check(i,n,maps,available);  
     }
    }
}
