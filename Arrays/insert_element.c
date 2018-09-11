#include<stdio.h>
int main()
{
   //To insert element at desired position in an array 
   char arr[7],ch;
   int i,pos,n;
   n=sizeof(arr)/sizeof(arr[0]);
   printf("Enter elements\n");
   for(i=0;i<n-2;i++)
      scanf(" %c",&arr[i]);
   printf("Original array\n");
   for(i=0;i<n-2;i++)
      printf("%c ",arr[i]);
   printf("\nEnter character to be inserted\n");
   scanf(" %c",&ch);
   printf("Enter position to insert character %c\n",ch);
   scanf(" %d",&pos);
   for(i;i>=pos;i--)
      a[i]=arr[i-1];
   a[pos]=ch;      
   printf("After insertion\n");
   for(i=0;i<n-1;i++)
     printf("%c ",arr[i]);
   printf("\n");
}
