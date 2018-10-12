//Recursive function to reverse the bits of a given number
#include<stdio.h>
int rev_bits(int n,int i,int j)
{
  int t1,t2;
  if(i<j)
  {
    t1=n>>i&1;
    t2=n>>j&1;
    if(t1!=t2)
    {
      n=n^(1<<i);
      n=n^(1<<j);
    }
    rev_bits(n,++i,--j);
  }
  else
    return n;
}

int main()
{
  int i,n,rev;
  printf("Enter a number\n");
  scanf("%d",&n);
  printf("Before reverse:\n");
  for(i=31;i>=0;i--)
    printf("%d",n>>i&1);
  n=rev_bits(n,0,31); 
  printf("\nAfter reverse:\n");
  for(i=31;i>=0;i--)
    printf("%d",n>>i&1);
  printf("\n");
}

