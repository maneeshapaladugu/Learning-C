//Program to implement grep command
//Print lines matching a pattern
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{ 
  if(argc != 3)
  {
    printf("Usage: ./grep pattern filename\n");
    return 0;
  }

  FILE *fp=fopen(argv[2],"r");
  if(fp == NULL)
  {
    printf("%s: No such file or directory\n",argv[2]);
    return 0;
  }

  char ch;
  int count = 0,max_line = 0;
  while((ch = fgetc(fp)) != EOF)
  {
    count ++;
    if(count > max_line)
      max_line = count;
    if(ch == '\n')
      count = 0;
  }
  rewind(fp);

  char *buf = (char*)malloc((max_line+1)*sizeof(char));
  
  while((fgets(buf,max_line+1,fp)) != NULL)
  {
    if(strstr(buf,argv[1]) != NULL)
      printf("%s",buf);
  }
} 
