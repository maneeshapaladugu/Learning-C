#include<stdio.h>
main()
{
   int n;
   printf("Enter a number\n");
   scanf("%d",&n);
   if((n&(n-1)))
      printf("Not Power of 2\n");
   else
      printf("power of 2\n");
}
