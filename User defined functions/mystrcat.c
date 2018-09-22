#include<stdio.h>
char *myStrcat(char*,const char*);
int main()
{
  //user defined strcat() function to concatenate two strings
  char src[20],dest[20];
  printf("Enter source: ");
  scanf("%s",src);
  printf("Enter destination: ");
  scanf("%s",dest);
  myStrcat(dest,src);
  printf("Dest String after concatenation\n");
  printf("%s\n",dest);
}

char *myStrcat(char *d,const char *s)
{
  int len,i;
  for(len=0;d[len];len++);//length of dest string
  for(i=0;s[i];i++)
  {
    d[len+i]=s[i];
  }
  d[len+i]='\0';
}
    
        
