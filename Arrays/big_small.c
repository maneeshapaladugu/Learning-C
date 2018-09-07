#include<stdio.h>
int main()
{ 
   //Input 10 numbers thrugh keyboard in to an array
   //Find the biggest and smallest numbers in an unsorted array
   //Without sorting technique
   int a[10],i,n,big,small;
   n=sizeof(a)/sizeof(a[0]);
   printf("Enter elements\n");
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);
   big=a[0];
   small=a[0];
   for(i=0;i<n;i++)
   {
      if(a[i]>big)
         big=a[i];
      if(a[i]<small)
         small=a[i];
   }
   printf("Biggest element in array:\n%d\n",big);
   printf("Smallest element in array:\n%d\n",small);
}

