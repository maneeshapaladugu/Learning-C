#include<stdio.h>
int main()
{
   //Input 10 numbers through keyboard in to an array
   //Display results of addition of even numbers and product of odd numbers
   int a[10],i,n,even=0,odd=1;
   n=sizeof(a)/sizeof(a[0]);
   printf("Enter elements\n");
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);
   
   for(i=0;i<n;i++)
   {
       if(a[i]%2==0)
          even=even+a[i];
       else
          odd=odd*a[i];
   }
   printf("Addition of even numbers:\n%d\n",even);
   printf("product of odd numbers:\n%d\n",odd);
}

 
