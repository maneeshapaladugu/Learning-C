#include<stdio.h>
int main()
{
   //Input 10 numbers through keyboard in to an array
   //Display results of addition of even numbers and product of odd numbers
   int arr[10],i,n,even=0,odd=1;
   n=sizeof(arr)/sizeof(arr[0]);
   printf("Enter elements\n");
   for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
   
   for(i=0;i<n;i++)
   {
       if(arr[i]%2==0)
          even=even+arr[i];
       else
          odd=odd*arr[i];
   }
   printf("Addition of even numbers:\n%d\n",even);
   printf("product of odd numbers:\n%d\n",odd);
}

 
