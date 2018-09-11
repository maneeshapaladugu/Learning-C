#include<stdio.h>
int main()
{
   //To reverse the elements of array
   int arr[5],t,n,i,j;
   n=sizeof(arr)/sizeof(arr[0]);
   printf("Enter elements\n");
   for(i=0;i<n;i++)
      scanf("%d",&arr[i]); 
   printf("\nBefore reverse\n");
   for(i=0;i<n;i++)
      printf("%d ",arr[i]);
   for(i=0,j=n-1;i<j;i++,j--)
   {
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
   }
   printf("\nAfter reverse\n");
   for(i=0;i<n;i++)
      printf("%d ",arr[i]);
   printf("\n");
}
   
