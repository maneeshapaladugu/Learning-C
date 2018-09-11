#include<stdio.h>
int main()
{
   //To find smallest element in an array
   int arr[5],n,i,small;
   n=sizeof(arr)/sizeof(arr[0]);
   printf("Enter elements\n");
   for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
   small=arr[0];
   for(i=1;i<n;i++)
   {
       if(arr[i]<small)
          small=arr[i];
   }
   printf("Smallest element is %d",small);
   printf("\n");
}
