#include<stdio.h>
main()
{ 
   //To find whether a number is power of 2 or not
   int n;
   printf("Enter a number\n");
   scanf("%d",&n);
   if((n&(n-1)))
      printf("Not Power of 2\n");
   else
      printf("power of 2\n");
}
