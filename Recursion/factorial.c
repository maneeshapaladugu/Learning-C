//Recursive function to find the factorial of a given number
#include<stdio.h>
int factorial(int n)
{
  if(n==1)
    return n;
  else 
    return(n*factorial(n-1));
}
int main()
{
  int n,fact;
  printf("Enter a number to find factorial\n");
  scanf("%d",&n);
  fact=factorial(n);
  printf("Factorial=%d\n",fact);
}
