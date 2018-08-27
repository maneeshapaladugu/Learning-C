#include<stdio.h>
int main()
{
  //To swap 2 numbers using bitwise operator
  int a,b;
  printf("Enter 2 numbers\n");
  scanf("%d%d",&a,&b);
  printf("Before swap\n%d %d\n",a,b);
  a^=b^=a^=b;
  printf("After swap\n%d %d\n",a,b);
}  
