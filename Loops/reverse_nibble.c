#include<stdio.h>
int main()
{
  //To reverse nibbles in a given byte
  int n,i,j,t1,t2;
  printf("Enter a number\n");
  scanf("%d",&n);
  printf("Before Reverse\n");
  for(i=31;i>=0;i--)
  {
     printf("%d",n>>i&1);
  }

  for(i=0,j=4;i<4;i++,j++)
  {
     if((n>>i&1)!=(n>>j&1))
     {
         n=n^(1<<i);
         n=n^(1<<j);
     }
  }

  printf("\n");
  printf("After Reverse\n");
  for(i=31;i>=0;i--)
  {
     printf("%d",n>>i&1);
  }
  printf("\n");
}
