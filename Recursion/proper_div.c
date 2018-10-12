//Recursive function to display all the proper divisors of a given number except that number and return their sum 
#include<stdio.h>
int perfect(int n,int i)
{
  static int sum=0;
  if(i<n)
  {
    if(n%i==0)
    {
      printf("%d ",i);	    
      sum=sum+i;
    }
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
  printf("The proper divisors of %d are\n",n);
  sum=perfect(n,i);
  printf("\nTheir Sum=%d\n",sum);
}
