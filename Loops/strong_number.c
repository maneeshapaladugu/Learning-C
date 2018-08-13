#include<stdio.h>
int main()
{
  //To find Strong number
  int n,i,temp,rem,sum=0,fact=1;
  printf("Enter a number\n");
  scanf("%d",&n);
  temp=n;
  for(;n;)
  {  
     rem=n%10;
     for(i=rem;i;i--)
         fact=fact*i;
     sum=sum+fact;
     fact=1;
     n=n/10;
  }
  if(sum==temp)
     printf("Strong number\n");
  else
     printf("Not strong number\n");
}
    
