#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm> 
using namespace std;
class wifi
{
  private:
   int wifi;
   int house;
   int* d;
  public:
   void read()
   {
   	cin>>wifi>>house;
   	d=new int [house];
   	for(int j=0;j<house;j++)
	{
	 cin>>d[j];	
	}
	sort(d,d+house);
   } 
   void binarysearch()
   {
   	int m; int l=0,r=(d[house-1]-d[0]+1)*2; 
   	  while(r>l)
	{
            m=(r+l)/2;
            int p=d[0];int counter=1;
            for(int i=1;i<house;i++)
                if(d[i]>p+m){
                    p=d[i];
                    counter++;
                }
            if(counter>wifi)
                l=m+1;
            else
                r=m;
        }
	cout<<fixed<<setprecision(1)<<(double)r/(double)2<<endl;
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
