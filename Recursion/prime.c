//Recursive function to print first 100 prime numbers
#include<stdio.h>
int prime(int n,int i)
{
  if(i==1)
    return 1;
  else
  {
    if(n%i==0)
      return 0;
    else
      return prime(n,--i);	    
  }	  

}
int main()
{
  int n,res;
  for(n=2;n<=100;n++)
  {
  res=prime(n,n/2);
  if(res==1)
    printf("%d ",n);
  }
}
