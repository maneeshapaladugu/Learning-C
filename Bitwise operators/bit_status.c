#include<stdio.h>
int main()
{
  //To find the bit position status is set/clear
  //Read a number and bit position
  int n,bp,res;
  printf("Enter a number\n");
  scanf("%d",&n);
  printf("Enter bit position\n");
  scanf("%d",&bp);
  res=n&(1<<bp);
  (res)?printf("Bit is Set\n"):printf("Bit is Clear\n");
}
  
