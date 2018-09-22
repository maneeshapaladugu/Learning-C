#include<stdio.h>
#include<string.h>
int main()
{
  //Predefined strcat() function to concatenate two strings
  char src[20],dest[20];
  printf("Enter source: ");
  scanf("%s",src);
  printf("Enter destination: ");
  scanf("%s",dest);
  strcat(dest,src);
  printf("Dest String after concatenation\n");
  printf("%s\n",dest);
}
