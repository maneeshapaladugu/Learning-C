#include<stdio.h>
int main()
{
   //To display binary of a real number
   float n=7.5;
   char *cp=(char*)&n;
   for(int i=3;i>=0;i--,printf(" "))
   {
      for(int j=sizeof(char)*8-1;j>=0;j--)
          printf("%d",(*(cp+i))>>j&1);
   } 
   printf("\n");
} 
