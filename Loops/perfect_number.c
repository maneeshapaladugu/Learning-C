#include<stdio.h>
int main()
{ 
   //To find perfect number 
   int i,s=0,n,r;
   printf("Enter a number\n");
   scanf("%d",&n);
   for(i=1;i<n;i++)
   {
        r=n%i;
        if(r==0)
             s=s+i;
    }
    if(s==n)
         printf("Perfect\n");
    else
      printf("Not perfect\n");
}
