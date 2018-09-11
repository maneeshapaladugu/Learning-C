#include<stdio.h>
int main()
{
   //To delete element at desired position from an array 
   int arr[8],pos,n,i;
   n=sizeof(arr)/sizeof(arr[0]);
   printf("Enter elements\n");
   for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
   printf("Original array\n");
   for(i=0;i<n;i++)
      printf("%d ",arr[i]);
   printf("\nEnter position of element to be deleted\n");
   scanf("%d",&pos);
   for(i=pos;i<n;i++)
      arr[i]=arr[i+1];      
   printf("After deletion\n");
   for(i=0;i<n-1;i++)
      printf("%d ",arr[i]);
   printf("\n");
}
