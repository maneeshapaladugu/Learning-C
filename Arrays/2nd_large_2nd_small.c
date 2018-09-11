#include<stdio.h>
int main()
{
   //To Find the 2nd largest and 2nd smallest elements of an unsorted array
   //Without using sorting technique
   int arr[10],i,n,big,big2,small,small2;
   n=sizeof(arr)/sizeof(arr[0]);
   printf("Enter elements\n");
   for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
   big=arr[0];
   small=arr[0];
   for(i=0;i<n;i++)
   {
      if(arr[i]>big)
         big=arr[i];
      if(arr[i]<small)
         small=arr[i];
   }
   printf("Largest element in array:\n%d\n",big);
   printf("Smallest element in array:\n%d\n",small);
   big2=0;
   small2=1000;
   for(i=0;i<n;i++)
   {
      if(arr[i]<big&&arr[i]>big2)
         big2=arr[i];
      if(arr[i]>small&&arr[i]<small2)
         small2=arr[i];
   }
 
   printf("Second largest element in array:\n%d\n",big2);
   printf("Second Smallest element in array:\n%d\n",small2);
}
     
