#include<stdio.h>
int main()
{
  //To find whether given number is divisible by 8 or not
  //using bitwise operators
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  if((n&7)==0)
    printf("%d is Divisible by 8\n",n);
  else
    printf("%d is Not divisible by 8\n",n); 
}
