#include <iostream>
using namespace std;
int main()
{
 int ac[26]={0},bc[26]={0},cc[26]={0};
 char* a; a=new char[100000];  
 char* b; b=new char[100000];	
 char* c; c=new char[100000];		
 cin>>a>>b>>c;
 //計算字母個數 
 for(int i=0;a[i]!='\0';i++)
 {
   ac[a[i]-97]++;

 }
 for(int i=0;b[i]!='\0';i++)
 {
   bc[b[i]-97]++;
 }
 for(int i=0;c[i]!='\0';i++)
 {
   cc[c[i]-97]++;
 }
 //檢查a與b與c
 int bm=9999999,cm=9999999;
 int ansb=0,ansc=0;
 for(int i=0;i<26;i++)
 {
  if(bc[i]>0)
  {
   bm=min(bm,ac[i]/bc[i]);	
  }	
 } 
 for(int i=0;i<=bm;i++)
 {
   for(int j=0;j<26;j++)
 {
  if(cc[j]>0)
  {
   	cm=min(cm,(ac[j]-i*bc[j])/cc[j]);
  }	
 }
  if(i+cm>ansb+ansc)
  {
   ansb=i; ansc=cm;	
  }
 }
 //輸出
 for(int i=1;i<=ansb;i++)
 {
  cout<<b;	
 } 
  for(int i=1;i<=ansc;i++)
 {
  cout<<c;	
 }
 for(int i=0;i<26;i++)
 {
  if(ac[i]>0)
  {
  	char t;int c;
  	c=ac[i]-ansb*bc[i]-ansc*cc[i];
  	if(c>0)
  	{
     for(int j=0;j<c;j++)
	 {
	  t=i+97;
	  cout<<t;	
	 }	
  	}
  }	
 }  
 return 0;	
 } 
