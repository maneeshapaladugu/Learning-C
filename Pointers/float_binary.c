#include<stdio.h>
int main()
{
   //To display equivalent binary of float value using int pointer
   float n=7.5;
   int *ip=(int*)&n;
   for(int i=sizeof(int)*8-1;i>=0;i--)
      printf("%d",(*ip)>>i&1);
   printf("\n");
} 
