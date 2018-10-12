//Recursive function to reverse the given number
#include<stdio.h>
int reverse(int n)
{
   static int sum=0;
   if(n>0)
   {
     sum=sum*10+(n%10);
     reverse(n=n/10);
   }
   else
     return sum;
}

int main()
{
  int n,rev;
  printf("Enter a number\n");
  scanf("%d",&n);
  rev=reverse(n);
  printf("Reverse of %d is %d\n",n,rev);
}
