#include<stdio.h>
int main()
{
//count no of digits in a number
  int n,count=0;
  printf("Enter a number\n");
  scanf("%d",&n);
  while(n!=0)
  {
     n=n/10;
     count++;
  }
  printf("Count=%d\n",count);
}

