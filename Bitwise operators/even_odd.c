#include<stdio.h>
int main()
{
  //To find the given number is even or odd 
  //using bitwise operators
  int num;
  printf("Enter a number\n");
  scanf("%d",&num);
  (num&1)?printf("Odd\n"):printf("Even\n");
}
