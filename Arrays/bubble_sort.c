#include<stdio.h>
int main()
{
   //Sorting elements in ascending order using bubble sort method
   int arr[5],n,i,j,t;
   n=sizeof(arr)/sizeof(arr[0]);
   printf("Enter elements\n");
   for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
   printf("Before sorting\n");
   for(i=0;i<n;i++)
       printf("%d ",arr[i]);
   for(i=1;i<n;i++)
   {
      for(j=0;j<n-i;j++)
      {
           if(arr[j]>arr[j+1])
           {
               t=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=t;
           }
      }
   }
   printf("\nAfter sorting\n");
   for(i=0;i<n;i++)
       printf("%d ",arr[i]);
   printf("\n");
}
