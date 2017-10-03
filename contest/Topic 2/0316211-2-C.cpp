#include <iostream>
using namespace std;
int main()
{ 
 int card;
 int* s;
 int* d;
 cin>>card;
 while(card!=0)
 {
  int p1=0,p2=card-1,c=0;
  s=new int [card];
  d=new int [card-1];
  for(int i=0;i<card;i++)
  {
  	s[i]=i+1;
  }
  while(p1!=p2)
  {
	d[c]=s[p1]; p1++; p1%=card;
   	p2++; p2%=card; s[p2]=s[p1];
   	p1++; p1%=card; c++;
  } cout<<"Discarded cards:"; 
  for(int i=0;i<card-1;i++)
  {
  	if(i==card-2)
  	 cout<<" "<<d[i]<<endl;
  	else 
	cout<<" "<<d[i]<<",";
  }
   if(card-2==-1)
   {
   	cout<<endl;
   }
  	cout<<"Remaining card: "<<s[p1]<<endl;delete [] s; delete [] d;
  	cin>>card; 
 }
 return 0;	
} 
