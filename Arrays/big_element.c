#include<stdio.h>
int main()
{ 
   //To find biggest element in an array
   int a[5],n,i,big;
   n=sizeof(a)/sizeof(a[0]);
   printf("Enter elements\n");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   big=a[0];
   for(i=1;i<n;i++)
   {
       if(a[i]>big)
          big=a[i];
   }
   printf("Biggest element is %d",big);
   printf("\n");
}
