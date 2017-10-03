#include<iostream>
using namespace std;
class team
{
  private:
   int* member;
   int  number;
  public:
   void initial()
   {
   	 int n; 
	 cin>>n;
	 number = n;
	 member = new int [n];
   }
   void set()
   {
   	 for(int i=0;i<number;i++)
   	 {
   	 	cin>>member[i];
   	 }
   } 	
};
int main()
{
	int t; cin>>t; int i=0; 
	while(i!=t)
	{
	 team pqueue[t];
	 pqueue[i].initial();
	 pqueue[i].set();
	 i++;	
	}
} 
