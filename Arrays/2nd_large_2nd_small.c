#include<stdio.h>
int main()
{
   //To Find the 2nd largest and 2nd smallest elements of an unsorted array
   //Without using sorting technique
   int a[10],i,n,big,big2,small,small2;
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
   printf("Largest element in array:\n%d\n",big);
   printf("Smallest element in array:\n%d\n",small);
   big2=0;
   small2=1000;
   for(i=0;i<n;i++)
   {
      if(a[i]<big&&a[i]>big2)
         big2=a[i];
      if(a[i]>small&&a[i]<small2)
         small2=a[i];
   }
 
   printf("Second largest element in array:\n%d\n",big2);
   printf("Second Smallest element in array:\n%d\n",small2);
}
     
