#include<stdio.h>
main()
{
//To find positive or negative using control statemets
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  if(n<=0)
  {
     if(n==0)
       printf("Zero\n");
     else
       printf("Negative\n");
  } 
  else
     printf("Positive\n");

//using bitwise
 /*int n,i=sizeof(int)*8-1;
  printf("Enter a number\n");
  scanf("%d",&n);
  if(n==0)
     printf("Zero\n");
  else if((n&(1<<i))==0)
     printf("Positive\n");
  else
     printf("Negative\n");*/

//using conditional operator
/*int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  (n<=0)?(n==0)?printf("Zero\n"):printf("Negative\n"):printf("Positve\n");*/
}

