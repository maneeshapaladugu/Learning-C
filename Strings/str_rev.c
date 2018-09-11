#include<stdio.h>
int main()
{
   //To reverse the string
   char str[10],t,l,i,j;
   printf("Enter a string\n");
    scanf("%s",str);
   printf("Before reverse\n");
    printf("%s\n",str);
   for(l=0;str[l];l++);//length of the string
   for(i=0,j=l-1;i<j;i++,j--)
   {
        t=str[i];
        str[i]=str[j];
        str[j]=t;
   }
   printf("\nAfter reverse\n");
      printf("%s\n",str);
}


