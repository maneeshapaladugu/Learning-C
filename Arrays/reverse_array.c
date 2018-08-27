#include<stdio.h>
int main()
{
   int a[5],t,n,i,j;
   n=sizeof(a)/sizeof(a[0]);
   printf("Enter elements\n");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]); 
   printf("Before reverse\n");
   for(i=0;i<n;i++)
      printf("%d",a[i]);
   for(i=0,j=n-1;i<j;i++,j--)
   {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
   }
   printf("\nAfter reverse\n");
   for(i=0;i<n;i++)
      printf("%d",a[i]);
   printf("\n");
}
   
