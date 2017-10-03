#include<stdio.h>
#include<string.h>
int stack[10000];

int main()
{
 int num;
 while(scanf("%d",&num)!=EOF)
 {
  char c=getchar();
  int flag=1;
  memset(stack,0,sizeof(stack));
  int top=0;
  if(num<0) stack[++top]=num;
  else {flag=0;};
  while(c!='\n')
  {
   scanf("%d",&num);
   if(num<0) stack[++top]=num;
   else
   {
    int sum=0;
    while(top>0 && stack[top]>0) { sum+=stack[top--]; }
    if(num+stack[top]==0&&sum<num) stack[top]=num;
    else flag=0;   
   }       
   if(flag==0) while((c=getchar())!='\n');
   else c=getchar();      
  }//whilec  
  if(flag&&top==1) printf(":-) Matrioshka!\n");
  else printf(":-( Try again.\n");                         
 }
 return 0;   
}
