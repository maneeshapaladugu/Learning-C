#include<stdio.h>
int main()
{
   //To display equivalent binary of double value using int pointer
   double n=7.5;
   int *ip=(int*)&n;
   for(int i=1;i>=0;i--,printf(" "))
   {
      for(int j=sizeof(int)*8-1;j>=0;j--)
      printf("%d",*(ip+i)>>j&1);
   } 
   printf("\n");
}
