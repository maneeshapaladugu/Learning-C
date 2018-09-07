#include<stdio.h>
int main()
{
  //To swap first and last nibbles of a given number
  int n,i,j,t1,t2;
  printf("Enter a number\n");
  scanf("%d",&n);
  printf("Before swapping nibbles\n");
  for(i=31;i>=0;i--)
      printf("%d",n>>i&1);
  for(i=0,j=28;i<4;i++,j++)
  {
     t1=n>>i&1;
     t2=n>>j&1;
     if(t1!=t2)
     {
         n=n^(1<<i);
         n=n^(1<<j);
     }
  }
  printf("\nAfter swapping nibbles\n");
  for(i=31;i>=0;i--)
      printf("%d",n>>i&1);
  printf("\n");
}
