#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n!=0)
	{
		int rank[n]; int counter=1; int pri=1;
		for(int i=0;i<n;i++)
		rank[i]=0; 
		vector <int> team[n];
		queue <int> teamqueue[n];
		queue <int> answer;
		for(int i=0;i<n;i++)
		{
			int qn;
			cin>>qn;
			for(int j=0;j<qn;j++)
			{
			  int m; cin>>m;
			  team[i].push_back(m);	
			}
		}
		char* a; a=new char;
		cin>>a;
		while(a[0]!='S')
		{
		  if(a[0]=='E')
		  {
		  	int mem; cin>>mem;
		  	for(int s=0;s<n;s++)
		  	{
		  		 int ch=0;
				  for(int i=0;i<team[s].size();i++)
		  		{
		  		 if(team[s][i]==mem)
				   {
				   	ch=1;cout<<"found"<<endl; break;
				   }	
		  		}
				  if(ch==1)
				  {
				  	if(rank[s]==0)
				  	{
				  	 rank[s]=counter;
					   counter++;
				  	} teamqueue[s].push(mem);
				  } 
		  	}
		  }else
		  {
		   int z=1;
		   for(int c=0;c<n;c++)
		   {
		   	if(rank[c]==z)
		   	{
		   	  cout<<c<<" "<<rank[c]<<endl;
				 if(teamqueue[z].size()==0)
				 {
				 z++;
			     }
			  else
			  { 
			  answer.push(teamqueue[z].front());
			  cout<<teamqueue[z].front()<<endl;
			  teamqueue[z].pop();
		      }
		   	}
		   }	
		  }
		  cin>>a;	
		}
		 for(int i=0;i<=answer.size();i++)
		 {
		 	cout<<answer.front();
		 	answer.pop();
		 }
		cin>>n;
	}
return 0;	
}
