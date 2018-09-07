#include<stdio.h>
int main()
{
   //To delete element at desired position from an array 
   int a[8],pos,n,i;
   n=sizeof(a)/sizeof(a[0]);
   printf("Enter elements\n");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   printf("Original array\n");
   for(i=0;i<n;i++)
      printf("%d ",a[i]);
   printf("\nEnter position of element to be deleted\n");
   scanf("%d",&pos);
   for(i=pos;i<n;i++)
      a[i]=a[i+1];      
   printf("After deletion\n");
   for(i=0;i<n-1;i++)
      printf("%d ",a[i]);
   printf("\n");
}
