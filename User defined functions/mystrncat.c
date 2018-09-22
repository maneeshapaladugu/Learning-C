#include<stdio.h>
char *myStrncat(char*,const char*,int);
int main()
{
  //user defined strncat() function to concatenate two strings
  char src[20],dest[20];
  int n;
  printf("Enter source: ");
  scanf("%s",src);
  printf("Enter destination: ");
  scanf("%s",dest);
  printf("Enter n value\n");
  scanf("%d",&n);
  myStrncat(dest,src,n);
  printf("Dest String after concatenation\n");
  printf("%s\n",dest);
}

char *myStrncat(char *d,const char *s,int n)
{
  int len,i;
  for(len=0;d[len];len++);//length of dest string
  for(i=0;s[i]&&i<n;i++)
  {
    d[len+i]=s[i];
  }
  d[len+i]='\0';
}
    
        
