#include<stdio.h>
int binary(int);
int main()
{
  //To print binary of a number and no of bits set in it using functions
  int n,ret;
  printf("Enter a number\n");
  scanf("%d",&n);
  ret=binary(n);
  printf("\nBits set=%d\n",ret);
}
int binary(int m)
{
  int i,count=0;
  for(i=31;i>=0;i--)
  {
    if(m>>i&1)
    {
      printf("1");
      count++;
    }
    else
      printf("0");
  }
  return count;
}
   
