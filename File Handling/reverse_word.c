//Program to reverse particular word in a file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *strrev(const char *s);
int main(int argc,char *argv[])
{
  if(argc != 3)
  {
    printf("Usage: ./reverse filename word\n");
    return 0;
  }

  FILE *fp=fopen(argv[1],"r");
  if(fp == NULL)
  { 
    printf("File doesn't exist\n");
    return 0;
  }

  //Finding file size
  int size;
  fseek(fp,0,SEEK_END);
  size=ftell(fp);
  rewind(fp);

  //Allocating DMA buffer and copying file data to buffer
  char *buf=(char*)malloc((size+1)*sizeof(char));
  fread(buf,sizeof(char),size,fp);
 
  int len=strlen(argv[2]);
  char *rev_str =strrev(argv[2]);
  char *p=buf;

  while((p = strstr(p,argv[2])) != NULL)
  {
    strncpy(p,rev_str,len);
    p += len;
  }
  freopen(argv[1],"w",fp);
  fwrite(buf,sizeof(char),size,fp);
  fclose(fp);
}

char *strrev(const char *s)
{
  int max_index = strlen(s) - 1;
  static char *temp = NULL;
  temp=calloc((max_index + 1),sizeof(char));
  int i = 0;
  while(max_index >= 0)
  {
    temp[i++] = s[max_index--];
  }
  return temp;
}
