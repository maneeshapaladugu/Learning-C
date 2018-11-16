//Program to replace a character with another character in a given file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char **argv)
{
  if(argc != 4)
  {
    printf("Usage: ./replace filename ch1 ch2\n");
    return 0;
  }
 
  //open file in read mode
  FILE *fp = fopen(argv[1],"r");

  //find file size and rewind file
  char ch;
  int size=0;
  while((ch = fgetc(fp)) != EOF)
   size ++;
  rewind(fp);
  
  //allocate DMA buffer based on file size+1
  char *buf=(char *)malloc(size+1*sizeof(char));
  
  //copy file data in to buffer and place null char at last
  int i=0;
  while((ch=fgetc(fp)) != EOF)
    buf[i++] = ch;
  buf[i] = '\0';
  
  //replacement with new character
  for(i=0;buf[i];i++)  
  {
    if(buf[i] == argv[2][0])
      buf[i] = argv[3][0];
  }
  
  fclose(fp);//close file from read mode
  
  //open file in write mode
  fp = fopen(argv[1],"w");

  //copy buffer data in to file
  for(i=0;buf[i];i++)
    fputc(buf[i],fp);

  printf("Character successfully replaced in file\n");

  fclose(fp);//close file from write mode
}
