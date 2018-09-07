#include<stdio.h>
int main()
{
   //To insert element at desired position in an array 
   char a[7],ch;
   int i,pos,n;
   n=sizeof(a)/sizeof(a[0]);
   printf("Enter elements\n");
   for(i=0;i<n-2;i++)
      scanf(" %c",&a[i]);
   printf("Original array\n");
   for(i=0;i<n-2;i++)
      printf("%c ",a[i]);
   printf("\nEnter character to be inserted\n");
   scanf(" %c",&ch);
   printf("Enter position to insert character %c\n",ch);
   scanf(" %d",&pos);
   for(i;i>=pos;i--)
      a[i]=a[i-1];
   a[pos]=ch;      
   printf("After insertion\n");
   for(i=0;i<n-1;i++)
     printf("%c ",a[i]);
   printf("\n");
}
