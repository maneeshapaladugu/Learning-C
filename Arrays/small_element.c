#include<stdio.h>
int main()
{
   //To find smallest element in array
   int a[5],n,i,small;
   n=sizeof(a)/sizeof(a[0]);
   printf("Enter elements\n");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   small=a[0];
   for(i=1;i<n;i++)
   {
       if(a[i]<small)
          small=a[i];
   }
   printf("Smallest element is %d",small);
   printf("\n");
}
