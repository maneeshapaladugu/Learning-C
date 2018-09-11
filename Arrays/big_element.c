#include<stdio.h>
int main()
{ 
   //To find biggest element in an array
   int arr[5],n,i,big;
   n=sizeof(arr)/sizeof(arr[0]);
   printf("Enter elements\n");
   for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
   big=arr[0];
   for(i=1;i<n;i++)
   {
       if(arr[i]>big)
          big=arr[i];
   }
   printf("Biggest element is %d",big);
   printf("\n");
}
