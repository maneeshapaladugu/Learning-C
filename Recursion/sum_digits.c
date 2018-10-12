//Recursive function to find the sum of digits of a given number
#include<stdio.h>
int sum_digits(int n)
{
  static int sum=0;
  if(n>0)
  {
    sum=sum+(n%10);
    sum_digits(n=n/10);
  }
  else
    return sum;
}

int main()
{
  int n,s;
  printf("Enter a number\n");
  scanf("%d",&n);
  s=sum_digits(n);
  printf("Sum of digits of %d is %d\n",n,s);
}

