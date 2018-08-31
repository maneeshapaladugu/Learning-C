#include<stdio.h>
int main()
{
   //To reverse the string
   char a[10],t,l,i,j;
   printf("Enter a string\n");
    scanf("%s",a); 
   printf("Before reverse\n");
    printf("%s\n",a);
   for(l=0;a[l];l++);//length of the string
   for(i=0,j=l-1;i<j;i++,j--)
   {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
   }
   printf("\nAfter reverse\n");
      printf("%s\n",a);
}
   
