#include<stdio.h>
void binary(int);
int main()
{
  //To print binary of a number using functions
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  binary(n);
}
void binary(int m)
{
  int i;
  for(i=31;i>=0;i--)
     printf("%d",m>>i&1);
  printf("\n");
}
   
