#include<stdio.h>
int main()
{
  //To find prime numbers in given range
  int r1,r2,n,i,j;
  printf("Enter starting range\n");
  scanf("%d",&r1);
  printf("Enter ending range\n");
  scanf("%d",&r2);
  for(i=r1;i<=r2;i++)
  {
     for(j=2;j<i;j++)
     {
         if(i%j==0)
	    break;
     }
     if(i==j)
          printf("%d ",i);
  }
}
