#include<stdio.h>
int main()
{
   int i,b,e,power=1;
   printf("Enter base\n");
   scanf("%d",&b);
   printf("Enter exponent\n");
   scanf("%d",&e);
   for(i=0;i<e;i++)
   {
      power=power*b;
   }
   printf("%d Power %d is\n%d\n",b,e,power);
}
