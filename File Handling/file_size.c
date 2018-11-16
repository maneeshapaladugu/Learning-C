//Program to find the size of a file
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
  
  fseek(fp,0,SEEK_END);
  printf("File size: %ld bytes\n",ftell(fp));

  /*char ch;
  int size= 0;
  while((ch = fgetc(fp)) != EOF)
   size ++;
  printf("File size: %d bytes\n",size);*/
}

