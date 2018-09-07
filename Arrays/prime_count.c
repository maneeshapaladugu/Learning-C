#include<stdio.h>
int main()
{
   //Input 10 numbers through keyboard in to an array
   //To find count of prime numbers in that array
   int a[10],b[10];
   int n,i,j,k=0,count=0;
   n=sizeof(a)/sizeof(a[0]);
   printf("Enter elements\n");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    
   for(i=0;i<n;i++)
   {
      for(j=2;j<a[i];j++)
      {
         if(a[i]%j==0)
            break;
      }
      if(a[i]==j)
      {
         count++;
         b[k++]=a[i];
         
      }
   }
   printf("Prime numbers count:\n%d\n",count);
   printf("Prime numbers are:\n");
   for(i=0;i<k;i++)
      printf("%d ",b[i]);
   printf("\n");
}
       
