//Recursive function to print the 'n' fibonacci series numbers
#include<stdio.h>
void fibonacci(int n)
{
  static int x=0,y=1,z;
  if(n>0)
  {
    printf("%d ",x);
    z=x+y;
    x=y;
    y=z;
    fibonacci(--n);
  }
}

int main()
{
  int n;
  printf("Enter n value\n");
  scanf("%d",&n);
  fibonacci(n);
}
