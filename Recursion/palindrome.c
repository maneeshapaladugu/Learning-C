//Recursive function to print the palindrome numbers in a given range
#include<stdio.h>
int *palindrome(int n)
{
  static int sum=0;
  if(n>0)
  {
    sum=sum*10+(n%10);
    palindrome(n=n/10);
  }
  else
    return &sum;
}
int main()
{
  int *ptr;
  for(int n=11;n<=200;n++)
  {  
    ptr=palindrome(n);
    if(*ptr==n)
      printf("%d ",n);
    *ptr=0;
  }
}
