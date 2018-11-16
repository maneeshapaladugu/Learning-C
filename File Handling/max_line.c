//Program to find the biggest line length in the given file 
#include<stdio.h>
int main(int argc,char *argv[])
{
  if(argc != 2)
  {
    printf("Usage: ./a.out filename\n");
    return 0;
  }

  FILE *fp;
  fp = fopen(argv[1],"r");

  if(fp == NULL)
  {
    printf("%s: No such file or directory\n",argv[1]);
    return 0;
  }

  char ch;
  int count= 0, max_line = 0;
  while((ch = fgetc(fp)) != EOF)
  {
    count ++;
    if(count > max_line)
      max_line = count;
    if(ch=='\n')
      count = 0;
  }

  printf("Maximum line length in given file: %d\n",max_line);  
}
