#include<stdio.h>
#include<string.h>
int main()
{
  //Predefined strncat() function to concatenate two strings
  char src[20],dest[20];
  int n;
  printf("Enter string1: ");
  scanf("%s",src);
  printf("Enter string2: ");
  scanf("%s",dest);
  printf("Enter n value: ");
  scanf("%d",&n);
  strncat(dest,src,n);
  printf("Dest String after concatenation\n");
  printf("%s\n",dest);
}
