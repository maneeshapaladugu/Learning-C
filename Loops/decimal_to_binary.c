#include<stdio.h>
int main()
{
   //To print binary equivalent using while loop 
   int n,i=sizeof(int)*8-1;
   printf("Enter a number\n");
   scanf("%d",&n);
   while(i>=0)
   {
      printf("%d",(n>>i)&1);
      i--;
   }
   
   //Using for loop
   /*int n,i;
   printf("Enter a number\n");
   scanf("%d",&n);
   for(i=sizeof(int)*8-1;i>=0;i--)
       printf("%d",n>>i&1);
   printf("\n"); */
}
