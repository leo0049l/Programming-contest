#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class wifi
{
  private:
   int wifi;
   int house;
   double* d;
  public:
   void read()
   {
   	cin>>wifi>>house;
   	d=new double [house];
   	for(int j=0;j<house;j++)
	{
	 cin>>d[j];	
	}
   } 
   void binarysearch()
   {
   	double m; double l=0,r=d[house-1]-d[0]; 
   	
   while(r-l>=0.001)
	{
		m=(l+r)/2;
		if(check(m)==0)
		{
		 r=m;	
		}
	    if(check(m)==1)
		{
		 l=m;	
		}
	} 
	cout<<fixed<<setprecision(1)<<m<<endl;
   }
   int check(double m)
   {
     double w[wifi]; int i; int counter=0; 
     w[0]=d[0]+m;
     for(i=1;i<house;i++)
     {
      	if(fabs(w[counter]-d[i])>m)
      	{
		  counter++;
		  if(counter==wifi)
		   break; 
		  w[counter]=d[i]+m;
      	}
     }
     if(counter<wifi-1)
      return 0 ;
	 if(counter==wifi-1 && fabs(d[house-1]-w[counter])>m)
	  return 1 ; 
	 if(counter==wifi-1 && fabs(d[house-1]-w[counter])==m)
	  return 0; 
} 
};
int main()
{
	int test;
	cin>>test;
	wifi a[test];
	for(int i=0;i<test;i++)
	{
        a[i].read();
		a[i].binarysearch();
	}
	return 0;
}
