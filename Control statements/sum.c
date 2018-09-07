#include<stdio.h>
int main()
{
//sum of digits of number
  int n,rem,sum=0;
  printf("Enter a number\n");
  scanf("%d",&n);
  while(n)
  {
     rem=n%10;
     sum=sum+rem;
     n=n/10;
  }
  printf("Sum=%d\n",sum);
}

