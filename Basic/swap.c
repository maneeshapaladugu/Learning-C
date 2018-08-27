#include<stdio.h>
int main()
{
  //To swap 2 numbers using temp variable
  int c,d,temp;
  printf("Enter c and d values\n");
  scanf("%d%d",&c,&d);
  printf("Before swap\nc=%d d=%d\n",c,d);
  temp=c;
  c=d;
  d=temp;
  printf("After swap\nc=%d d=%d\n",c,d);

  //To swap 2 numbers without using temp variable
  /*int c,d;
  printf("Enter c and d values\n");
  scanf("%d%d",&c,&d);
  printf("Before swap\nc=%d d=%d\n",c,d);
  c=c+d;
  d=c-d;
  c=c-d;
  printf("After swap\nc=%d d=%d\n",c,d);*/
}
   
