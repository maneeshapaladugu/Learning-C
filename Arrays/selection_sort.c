#include<stdio.h>
int main()
{
   //Sorting elements in ascending order using selection sort method
   int a[5],n,i,j,t;
   n=sizeof(a)/sizeof(a[0]);
   printf("Enter elements\n");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   printf("Before sort\n");
   for(i=0;i<n;i++)
      printf("%d ",a[i]);
   printf("\n");
   for(i=0;i<n-1;i++)
   {
       for(j=i+1;j<n;j++)
       {
          if(a[i]>a[j])
          {
              t=a[i];
              a[i]=a[j];
              a[j]=t;
          }
       }
   }
   for(i=0;i<n;i++)
        printf("%d ",a[i]);
   printf("\n");
}
   
