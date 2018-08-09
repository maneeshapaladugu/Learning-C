#include<stdio.h>
int main()
{
//armstrong number
 int n,rem,sum=0,temp;
  printf("Enter a number\n");
  scanf("%d",&n);
  temp=n;
  while(n)
  {
     rem=n%10;
     sum=sum+(rem*rem*rem);
     n=n/10;
  }
  if(temp==sum)
      printf("Armstrong number\n");
  else
      printf("Not armstrong number\n");
}

