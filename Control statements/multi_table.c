#include<stdio.h>
int main()
{  
  //Multiplication tables from 1 to 10
  int i,j;
  for(i=1;i<=10;i++)
  { 
     for(j=1;j<=10;j++)
     {
        printf("%d*%d=%d",i,j,i*j);
        printf("\n");
     }
     printf("\n");  
  }
}
