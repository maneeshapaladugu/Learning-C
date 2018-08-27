#include<stdio.h>
int main()
{
   //Sorting elements in Ascending order using bubble sort method
   int a[5],n,i,j,t;
   n=sizeof(a)/sizeof(a[0]);
   printf("Enter elements\n");
   for(i=0;i<n;i++)
       scanf("%d",&a[i]);
   printf("Before sorting\n");
   for(i=0;i<n;i++)
       printf("%d ",a[i]);
   for(i=1;i<n;i++)
   {
      for(j=0;j<n-i;j++)
      {
           if(a[j]>a[j+1])
           {
               t=a[j];
               a[j]=a[j+1];
               a[j+1]=t;
           }
      }
   }
   printf("\nAfter sorting\n");
   for(i=0;i<n;i++)
       printf("%d ",a[i]);
   printf("\n");
}
