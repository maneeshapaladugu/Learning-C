//Program to remove the extra blank spaces and blank lines in a text file
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
  if(argc != 2)
  {
    printf("Usage: ./a.out filename\n");
    return 0;
  }
  
  FILE *fp=fopen(argv[1],"r");
  if(fp == NULL)
  {
    printf("%s: No such file or directory\n",argv[1]);
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
  fclose(fp); 
  
  FILE *fp2=fopen("temp.txt","w");
  int i;
  for(i=0;buf[i];i++)
  {
    if(buf[i] == ' ' && buf[i+1] == ' ' || buf[i] == '\n' && buf[i+1] == '\n')
      continue;
    else
      putc(buf[i],fp2);
  }
  fclose(fp2);
  rename("temp.txt",argv[1]);
  
  //Displaying file contents
  char ch;
  fp=fopen(argv[1],"r");
  while((ch=fgetc(fp)) != EOF)
   printf("%c",ch);
  fclose(fp); 
}
