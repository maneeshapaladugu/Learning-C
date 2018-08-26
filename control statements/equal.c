#include<stdio.h>
int main()
{  
   //To compare 2 numbers equal or not using bitwise operators
   int x,y;
   printf("Enter 2 numbers\n");
   scanf("%d%d",&x,&y);
   if(x^y)
      printf("Not Equal\n");
   else
      printf("Equal\n");

   /* int x,y,flag;
   printf("Enter 2 numbers\n");
   scanf("%d%d",&x,&y);
   for(i=0;i<sizeof(int)*8;i++)
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
