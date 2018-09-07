#include<stdio.h>
int main()
{
   //To print ASCII equivalents in tabular format
   char x;
   printf("Oct  Dec  Hex  Char");
   for(x=0;x>=0;x++)
   {
     printf("%o   %d   %x   %c\n",x,x,x,x);
   }
}
