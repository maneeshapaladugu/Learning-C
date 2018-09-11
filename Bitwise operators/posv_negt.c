#include<stdio.h>
int main()
{
  //To find the given num is positive/negative
  //using bitwise operators
  int n,i=sizeof(int)*8-1;
  printf("Enter a number\n");
  scanf("%d",&n);
  if(n==0)
    printf("Zero\n");
  else if((n&(1<<i))==0)
    printf("Positive\n");
  else
    printf("Negative\n");
}
