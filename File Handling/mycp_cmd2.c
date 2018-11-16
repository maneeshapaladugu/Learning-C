//Program to implement copy command using fgets() and fputs()
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

  int size;
  fseek(fs,0,SEEK_END);
  size=ftell(fs);
  rewind(fs);

  //dest file with write mode
  FILE *fd;
  fd = fopen(argv[2],"w");

  char *p,arr[size];
  while((p=fgets(arr,size,fs)) != NULL)
    fputs(arr,fd);

  printf("Copy successful\n");
}

