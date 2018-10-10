#include<stdio.h>
// User defined atof() function
float my_atof(const char *p)
{
  int sum1=0,sum2=0,flag=0,factor=1;
  while(*p)
  {
    if(*p=='.')
    {
       flag=1;
       p++;
    }
    if(flag==0)
     sum1=sum1*10+(*p-48);
      
    else if(flag==1)
    {
      factor*=10;
      sum2=sum2*10+(*p-48);
    }
    p++;
  
  }
  return sum1 + (float)sum2/factor;
}
int main()
{
  float x;
  char a[10]="23.25";
  x=my_atof(a);
  printf("%f\n",x);
}
 
  
