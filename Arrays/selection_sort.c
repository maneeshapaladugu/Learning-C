#include<stdio.h>
int main()
{
   //Sorting elements in ascending order using selection sort method
   int arr[5],n,i,j,t;
   n=sizeof(arr)/sizeof(arr[0]);
   printf("Enter elements\n");
   for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
   printf("Before sorting\n");
   for(i=0;i<n;i++)
      printf("%d ",arr[i]);
   for(i=0;i<n-1;i++)
   {
       for(j=i+1;j<n;j++)
       {
          if(arr[i]>arr[j])
          {
              t=arr[i];
              arr[i]=arr[j];
              arr[j]=t;
          }
       }
   }
   printf("\nAfter sorting\n");
   for(i=0;i<n;i++)
        printf("%d ",arr[i]);
   printf("\n");
}
   
