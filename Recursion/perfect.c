//Recursive function to find whether given number is perfect or not
#include<stdio.h>
int perfect(int n,int i)
{
  static int sum=0;
  if(i<n)
  {
    if(n%i==0)
      sum=sum+i;
    perfect(n,++i);
  }
  else
   return sum;
}

int main()
{
  int i=1,n,sum;
  printf("Enter a number\n");
  scanf("%d",&n);
  sum=perfect(n,i);
  if(sum==n)
    printf("%d is a perfect number\n",n);
  else
    printf("%d is not perfect number\n",n);
}
