#include<stdio.h>
int main()
{
   int x,y,flag;
   printf("Enter 2 numbers\n");
   scanf("%d%d",&x,&y);
   if(x^y)
      printf("Not Equal\n");
   else
      printf("Equal\n");

   /*for(i=0;i<sizeof(int)*8;i++)
   {
      if((x>>i&1)!=(y>>i&1))
      {
           flag=1;
           break;
      }
   }
   if(flag==1)
      printf("Not equal\n");
   else
      printf("Equal\n");*/

}
