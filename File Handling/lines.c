//Program to find the no of lines in a given file
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
  int line = 0;
  while((ch = fgetc(fp)) != EOF)
  {
    if(ch=='\n')
      line ++;
  }
  printf("No of lines in the given file: %d \n",line);  
}

