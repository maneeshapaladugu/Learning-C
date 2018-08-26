#include<stdio.h>
int main()
{
   //To find the given machine is little endian or big endian
   int x=1;
   char *cp=&x;
   if(*cp==1)
      printf("Little endian\n");
   else
      printf("Big endian\n");
}
