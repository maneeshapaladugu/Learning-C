//Program to implement copy command 
#include<stdio.h>
int main(int argc,char *argv[])
{
  if(argc != 3)
  {
    printf("Usage:./cp src dest\n");
    return 0;
  }

  //src file with read mode
  FILE *fs;
  fs=fopen(argv[1],"r");
  
  if(fs == NULL)
  {
    printf("%s : No such file or directory\n",argv[1]);
    return 0;
  }
  
  //src file with read mode
  FILE *fd;
  fd=fopen(argv[2],"w");
  
  char ch;
  while((ch = fgetc(fs)) != EOF)
    fputc(ch,fd);

  printf("Copy successful\n");
}

