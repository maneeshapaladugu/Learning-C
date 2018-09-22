#include<stdio.h>
void swap(int*,int*);
int main()
{
  //Swapping two numbers using functions
  int n1,n2;
  printf("Enter 2 numbers\n");
  scanf("%d%d",&n1,&n2);
  printf("Before swapping\n");
  printf("n1=%d n2=%d\n",n1,n2);
  swap(&n1,&n2);
  printf("After swapping\n");
  printf("n1=%d n2=%d\n",n1,n2);
}
void swap(int *p,int *q)
{
  int t;
  t=*p;
  *p=*q;
  *q=t;
}

   
