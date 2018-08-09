#include<stdio.h>
int main()
{
//reverse a number
 int n,rem,rev=0;
  printf("Enter a number\n");
  scanf("%d",&n);
  while(n)
  {
     rem=n%10;
     rev=rev*10+rem;
     n=n/10;
  }
  printf("rev=%d\n",rev);
}
