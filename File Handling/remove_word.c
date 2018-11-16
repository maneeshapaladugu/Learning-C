//Program to remove the specific word in a given file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
  if(argc != 3)
  {
    printf("Usage: ./a.out filename word\n");
    return 0;
  }

  FILE *fp=fopen(argv[1],"r");
  if(fp == NULL)
  {
    printf("File doesn't exists\n");
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
 
  //closing file from read mode and open in write mode 
  fclose(fp);
  fp=fopen(argv[1],"w");

  int i=0,j;
  char *ptr;//ptr is a pointer every time points to word addr in the buffer
  while(ptr=strstr(buf+i,argv[2]))
  {
    j=ptr-buf;
    for(;i<j;i++)
      fputc(buf[i],fp);//writing char by char in to a file
    i=i+strlen(argv[2]);
  }
  for(;buf[i];i++)//writing remaining data in to a file
    fputc(buf[i],fp);
  fclose(fp);//closing file from write mode
  printf("Word removed successfully\n\n");
  
  fp=fopen(argv[1],"r");//displaying file contents
  char ch;
  while((ch=fgetc(fp)) != EOF)
    printf("%c",ch);
  fclose(fp);//closing file from read mode
}
