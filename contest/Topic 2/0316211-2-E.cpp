#include <iostream>
#include <cstring>
using namespace std;
void check(string,string);
string answer;
int main()
{
	string preorder;
    string inorder;     
	while(cin>>preorder>>inorder)
	{
	 check(preorder,inorder);
	 cout<<answer<<endl;
	 answer.clear(); 	
	}
    
  return 0;	 
}
void check(string a,string b)
{
	int i; 
	for(i=0;a[i]!='\0';i++)
	{;}
    if(i>0)
	{
		int j;
		for(j=0;b[j]!=a[0];j++)
		{;}
		check(a.substr(1,j),b.substr(0,j));
		check(a.substr(j+1,i-1),b.substr(j+1,i-1));
		answer.push_back(a[0]);
	} 
}
