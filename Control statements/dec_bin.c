#include<stdio.h>
int main()
{
 //To display binary of given decimal using goto statement
 int n,i=sizeof(int)*8-1;
 printf("Enter a number\n");
 scanf("%d",&n);
 binary:
  if(n&(1<<i))
   printf("1");
  else
   printf("0");
  i--;
 if(i>=0)
 goto binary;
}

