#include <iostream>
using namespace std;
char stone[21][21];
int s[21][21];
int read();
int check();
int main()
{
 int input;
 cin>>input;
 for(int i=0;i<input;i++)
 {
  read();
  check();
 }	
 return 0;
}
int read()
	{
	  for(int i=0;i<21;i++)
	  {
	  	for(int j=0;j<21;j++)
	  	{
	  		s[i][j]=0;
	  	}
	  }
	  for(int i=1;i<20;i++)
	  {
	  	for(int j=1;j<20;j++)
	  	{
		  cin>>stone[i][j];
        }
	  }

	  for(int i=1;i<20;i++)
	  {
	  	for(int j=1;j<20;j++)
	  	{
		 if(stone[i][j]=='0')
		 {
		   s[i][j]=0;	
		 }
		 else if(stone[i][j]=='1' )
		 {
		   s[i][j]=1;	
		 }
		 else if(stone[i][j]=='2')
		 {
		   s[i][j]=2;	
		 } 
        }
	  }
	  return 0;
	}
int check()
	{  
	  int win1=0,win2=0,x1=0,y1=0,x2=0,y2=0,error[2]={0}; 
	  //直 
	  for(int i=1;i<16;i++)
	  {
	  	for(int j=1;j<20;j++)
	  	{
		  int sum=0;
		  sum=s[i][j]*s[i+1][j]*s[i+2][j]*s[i+3][j]*s[i+4][j];
		  if(sum==1)
		  {
		  	if(s[i+5][j]==1 || s[i-1][j]==1)
		  	 {
			   error[0]=1;
			   }else{
			  x1=i; y1=j;  win1=1; } 
		  }
		  if(sum==32)
		  {
		  	if(s[i+5][j]==2 || s[i-1][j]==2)
		  	 {
              error[1]=2;
			   }else{
            x2=i; y2=j;  win2=2; } 
		  }		
	  	}
	  }  
	  //橫 
	  for(int i=1;i<20;i++)
	  {
	  	for(int j=1;j<16;j++)
	  	{
	  	  int sum=0;
		  sum=s[i][j]*s[i][j+1]*s[i][j+2]*s[i][j+3]*s[i][j+4];
		  if(sum==1)
		  {
		  	if(s[i][j+5]==1 || s[i][j-1]==1)
		  	 {
			  error[0]=1;
			   }else{
		   x1=i; y1=j; win1=1;} 
		  }
		  if(sum==32)
		  {
		  	if(s[i][j+5]==2 || s[i][j-1]==2)
		  	{
			   error[1]=2;
			   }else{
		   x2=i; y2=j; win2=2; }
		  }		
	  	}
	  }
	//左上右下 
      for(int i=1;i<=15;i++)
      {
      	  int a=i;
		   for(int j=1;j<=i;j++)
      	 {
      	 	int sum;
		    sum=s[j][16-a]*s[j+1][17-a]*s[j+2][18-a]*s[j+3][19-a]*s[j+4][20-a];
			if(sum==1)
		  {
		  	if(s[j+5][21-a]==1 || s[j-1][15-a]==1)
		  	{
			    error[0]=1;
			   }else{
			x1=j; y1=16-a; win1=1; }
		  }
		  if(sum==32)
		  {
		  	if(s[j+5][21-a]==2 || s[j-1][15-a]==2)
		  	{
			    error[1]=2;
			   }else{
			x2=j; y2=16-a; win2=2;}
		  }	a--;
      	 }
      } 
      for(int i=15;i>=2;i--)
      {
      	 int a=i;
		  for(int j=15;j>=i;j--)
      	{
      	  int sum;
		  sum=s[a][16-j]*s[a+1][17-j]*s[a+2][18-j]*s[a+3][19-j]*s[a+4][20-j];
		  if(sum==1)
		  {
		  	if(s[a+5][21-j]==1 || s[a-1][15-j]==1)
		  	{
			  error[0]=1;
			   }else{
			x1=a; y1=16-j; win1=1; }
		  }
		  if(sum==32)
		  {
		  	if(s[a+5][21-j]==2|| s[a-1][15-j]==2)
		  	{
			  error[1]=2;
			   }else{
			x2=a; y2=16-j; win2=2; }
		  }	a++;	
      	} 
      } 
	//右上左下  
      for(int i=1;i<=15;i++)
	  {
	  	 int t=i;
		  for(int j=1;j<=i;j++)
	  	{
	  	  int sum;
		  sum=s[t+4][j]*s[t+3][j+1]*s[t+2][j+2]*s[t+1][j+3]*s[t][j+4];
		  if(sum==1)
		  {
		  	if(s[t-1][j+5]==1 || s[t+5][j-1]==1)
		  	{
			   error[0]=1;
			   }else{
			x1=t+4; y1=j; win1=1; }
		  }
		  if(sum==32)
		  {
		  	if(s[t-1][j+5]==2|| s[t+5][j-1]==2)
		  	{
			   error[1]=2;
			   }else{
			x2=t+4; y2=j; win2=2;}
		  }	t--;			
	  	}
	  } 
	   for(int i=2;i<=15;i++)
	  {
	  	 int a=i;
		  for(int j=19;j>i;j--)
	  	{
	  	  int sum;
		  sum=s[j][i]*s[j-1][i+1]*s[j-2][i+2]*s[j-3][i+3]*s[j-4][i+4];
		  if(sum==1)
		  {
		  	if(s[j-5][i+5]==1 || s[j+1][i-1]==1)
		  	{
			   error[0]=1;
			   }else{
			x1=j; y1=i; win1=1; } 
		  }
		  if(sum==32)
		  {
		  	if(s[j-5][i+5]==2 || s[j+1][i-1]==2)
		  	{
			   error[1]=2;
			   }else{
			x2=j; y2=i; win2=2; }
		  }	a++;			
	  	}
	  }	
	     if((error[0]!=0 && error[1]!=0)||(win1==0 && win2==0))
	  		 cout<<"0"<<endl;
	     else if(error[0]!=0 && error[1]==0 && win2!=0)		 
			  cout<<"2"<<endl<<x2<<" "<<y2<<endl;
	      else if(error[0]==0 && error[1]!=0 && win1!=0)		 
			  cout<<"1"<<endl<<x1<<" "<<y1<<endl;
			 else if(error[0]==0&& error[1]==0  && win1!=0 )  
			   cout<<"1"<<endl<<x1<<" "<<y1<<endl;
			else if(error[0]==0 && error[1]==0 && win2!=0)
			  cout<<"2"<<endl<<x2<<" "<<y2<<endl;
			  else if(error[0]!=0 && error[1]==0 && win2==0)
			       cout<<"0"<<endl;
				else if(error[0]==0 && error[1]!=0 && win1==0)
			       cout<<"0"<<endl;
	  return 0;  	  
	}	 
