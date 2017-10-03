#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
  int test; scanf("%d",&test);
  for(int i=0;i<test;i++)
  {
  	int wifi;int house;
  	scanf("%d%d",&wifi,&house);
  	vector <float> d[house];
  	for(int j=0;j<house;j++)
  	{
  	   float a;
	   scanf("%d",&a);	d[j].push_back(a);
  	}
  	 if(wifi==house)
  	 cout<<"1.0"<<endl;
  	 else
	 cout<<bs(d,0,d[house-1],house,wifi)<<endl;	 
	 return 0;
  }
}
float bs(vector<float> d,float l,float r,float n,float w)
{
	float m;
	while(r-l>=0.1)
	{
		m=(l+r)/2;cout<<m<<endl;
		if(check(d,m,n,w)==0)
		{
		 l=m;	
		}
		if(check(d,m,n,w)==1)
		{
		 r=m;	
		}
	} 
	return m;
}		
int check(vector <float> d,float m,int n,int w)
{
  int t=w;    vector <float> wifi[w];
  for(int i=0;i<n;i++,w--)
  {
	if(w>0)
    {
	  wifi[t-w].push_back(d[i]+m);
	  float s=d[i]+m;
	  while(d[i+1]-s<m)
	  {
	  	i++;
	  }	
    }
  }
  if(w>0)
   return 1;
  float z=wifi.at(t-1);
  if(d[n-1]-z>m)
   return 0;
  else 
   return 1;  
} 
