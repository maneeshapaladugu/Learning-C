#include<stdio.h>
int main()
{
   //To reverse the string
   char arr[10],t,l,i,j;
   printf("Enter a string\n");
    scanf("%s",arr);
   printf("Before reverse\n");
    printf("%s\n",arr);
   for(l=0;arr[l];l++);//length of the string
   for(i=0,j=l-1;i<j;i++,j--)
   {
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
   }
   printf("\nAfter reverse\n");
      printf("%s\n",arr);
}


