#include<stdio.h>
int main()
{ 
   //Input 10 numbers thrugh keyboard in to an array
   //Find the biggest and smallest numbers in an unsorted array
   //Without sorting technique
   int arr[10],i,n,big,small;
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
   printf("Biggest element in array:\n%d\n",big);
   printf("Smallest element in array:\n%d\n",small);
}

