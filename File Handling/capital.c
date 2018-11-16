//Program to capitalize first letter of every word in a file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
  if(argc != 2)
  {
    printf("Usage: ./a.out filename\n");
    return 0;
  }

  FILE *fp=fopen(argv[1],"r+");
  if(fp == NULL)
  {
    printf("%s: No such file or directory\n",argv[1]);
    return 0;
  }
  
  //Finding file size
  int size;
  fseek(fp,0,SEEK_END);
  size = ftell(fp);
  rewind(fp);

  //Allociating DMA buffer and copying file data to buffer
  
  char *buf=(char*)malloc((size+1)*sizeof(char));
  fread(buf,sizeof(char),size,fp);
  rewind(fp);
  puts(buf); 
  
  int i;
  for(i = 0;buf[i];i++)
  {
    if((buf[i] == ' ' && buf[i+1] == ' ') || (buf[i] == '\n' && buf[i+1] == '\n'))
	continue;
    
    else if(buf[i] == ' ' || buf[i] == '\n')
      if(isalpha(buf[i+1]))
        buf[i+1]=buf[i+1]^32;
    
    else if (i == 0)
      buf[i]=buf[i]^32;
  }
  puts(buf); 

  for(i = 0;buf[i];i++)
    fputc(buf[i],fp);//Copying buffer data in to file
  fclose(fp);
}
