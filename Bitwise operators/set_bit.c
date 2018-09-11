#include<stdio.h>
int main()
{
  //To set the particular bit of a given number
  //Read a number and bit position
  int n,bp;
  printf("Enter a number\n");
  scanf("%d",&n);
  printf("Enter bit position\n");
  scanf("%d",&bp);
  printf("Before operation: n = %d\n",n);
  n=n|(1<<bp);
  printf("Before operation: n = %d\n",n);
}
  
