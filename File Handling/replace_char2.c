//Program to replace character in a file with another character using fseek()
#include<stdio.h>
int main(int argc,char *argv[])
{
  if(argc != 4)
  {
    printf("Usage: ./replace file ch1 ch2\n");
    return 0;
  }

  FILE *fp = fopen(argv[1],"r+");

  if(fp == NULL)
  {
    printf("File doesn't exist\n");
    return 0;
  }

  char ch;
  while((ch=fgetc(fp)) != EOF)
  {
    if(ch == argv[2][0])
    {
      fseek(fp,-1,SEEK_CUR);
      fputc(argv[3][0],fp);
    }	    
  }
  printf("Character replaced seccessully\n");
}


