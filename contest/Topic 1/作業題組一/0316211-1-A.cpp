#include <cstdio>
#include <cmath>
#include <iomanip>
int main()
{
  int p,a,b,c,d,k;	
  while(scanf("%d%d%d%d%d%d",&p,&a,&b,&c,&d,&k)==6)
  {
  double answer=0,large=p*(sin(a+b)+cos(c+d)+2);
  for(int i=2;i<=k;i++)
  {
  	double current=p*(sin(a*i+b)+cos(c*i+d)+2);
	if(current>large)
  	{
  	 large=current;	
  	}
  	if(large-current>0)
  	{
  	  double temp;
	  temp=large-current;
	  if(temp>answer)
	  {
	  	answer=temp;
	  }		
  	}
  }
	printf("%f\n",answer);	
 }
 return 0;	
} 

