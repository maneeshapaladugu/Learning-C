#include<stdio.h>
int main()
{
  //To swap adjacent bytes of a given 4-digit hexadecimal number
  int n,i,j,t1,t2;
  printf("Enter a number\n");
  scanf("%x",&n);
  printf("Before swapping adjacent bytes\n");
  printf("%x\n",n);
  for(i=31;i>=0;i--)
      printf("%d",n>>i&1);
  for(i=0,j=8;i<8;i++,j++)
  {
     t1=n>>i&1;
     t2=n>>j&1;
     if(t1!=t2)
     {
         n=n^(1<<i);
         n=n^(1<<j);
     }
  }
  printf("\nAfter swapping adjacent bytes\n");
  printf("%x\n",n);
  for(i=31;i>=0;i--)
     printf("%d",n>>i&1);
  printf("\n");
}
