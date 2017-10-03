#include <iostream>
using namespace std;
int f91(int);
int main()
{
 int i;
 cin>>i;
 while(i!=0)
 {
 cout<<"f91("<<i<<") = "<<f91(i)<<endl;
 cin>>i;
 }
 return 0;	
}
int f91(int n)
{
 if(n<=100)
 {
  n=n+11;
  f91(f91(n));	
 }
 else
 {
  n=n-10;
  return n;	
 }	
} 
