#include <cstdio>
int main()
{
	int stack[99999]; 
 	int input; char space;
	while(scanf("%d",&input)!=EOF)
	{
	  for(int i=0;i<99999;i++)
	   stack[i]=0;
	  int counter=0;
   	  int answer=1;
	   if(input>0)
	   answer=0;
	  else
	  {
	  counter++;
	  stack[counter]=input;
      }
	  scanf("%c",&space);
	  while(space!='\n')
	  {
	  	scanf("%d",&input);
	  	if(input<0)
	  	 {
		 counter++;
		 stack[counter]=input;
	     }
	  	else
		  {
		  	int check=0;
		     while(counter>0 && stack[counter]>0)
			 {
			 	check+=stack[counter];
			 	counter--;
			 } 
			 if(input+stack[counter]==0 && input>check)
			  {
			  stack[counter]=input;
		      }
			 else
			  answer=0; 	
		  } 
	    if(answer==0)
		{
			scanf("%c",&space);
			while(space!='\n')
			{
			  scanf("%c",&space);	
			}
		}
		else 
		scanf("%c",&space);
	  }	
	  if(answer==1 && counter==1)
	   printf(":-) Matrioshka!\n");
	  else
	   printf(":-( Try again.\n");
	}	
 return 0;	
} 
