#include<stdio.h>
int main()
{
//Palindrome number
   int i,rem,temp,rev,r1,r2;
   printf("Enter start range and end range\n");
   scanf("%d%d",&r1,&r2);
   for(i=r1;i<=r2;i++)
   {
      temp=i;
      rev=0;
      while(temp)
      {
         rem=temp%10;
         rev=rev*10+rem;
         temp=temp/10;
      }
      if(rev==i)
      printf("%d ",rev);
  }
}
