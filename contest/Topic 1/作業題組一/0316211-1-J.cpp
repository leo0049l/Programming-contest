#include <iostream>
#include <cmath>
using namespace std;
int bit(int);
int main()
{
 int n,l,r,x,ans=0;
 cin>>n>>l>>r>>x;
 int number[n];
 for(int i=0;i<n;i++)
 {
 	cin>>number[i];
 }
 int comb;
 comb=1*pow(2,n);
 int sum,large,small;
 for(int i=0;i<comb;i++)
 {
 	if(bit(i)>=2)
 	{
	  sum=0; large=-1; small=9999999; 	
 	     for(int a=0;a<n;a++)
 	     {
 	       if((i>>a)&1==1)
	       {
	  	    sum+=number[a];
	  	    large=max(large,number[a]);
	  	    small=min(small,number[a]);
	       }  	
 	     }
     int sub=large-small;
	 if(sum>=l &&sum<=r && sub>=x)
	 {
	 	ans++;
	 }		    
	}
 }
 cout<<ans;
 return 0;	
}
int bit(int n)
{
 int count=0;
   while(n)
   {
      count++;
      n&=n-1;
   }
   return count ;	
} 
