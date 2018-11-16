//Program to convert file data from upper to lower or lower to upper
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
  char ch;
  int size = 0,s,i=0;
  if(argc != 2)
  {
    printf("Usage: ./a.out filename\n");
    return 0;
  }
 
  //open file in read mode
  FILE *fp = fopen(argv[1],"r");

  //find file size and rewind file
  while((ch = fgetc(fp)) != EOF)
   size ++;
  rewind(fp);
  printf("File size: %d\n",size);
  
  //allocate DMA buffer based on file size+1
  s= size+1;
  char *p=(char *)malloc(s*sizeof(char));
  
  //copy file data in to buffer and place null char at last
  while((ch=fgetc(fp)) != EOF)
    p[i++] = ch;
  p[i] = '\0';
  
  //case conversion
  for(i=0;p[i];i++) 
  {
    if(p[i]!='\n') 
      p[i] = p[i]^32;
  }
  
  fclose(fp);//close file from read mode
  
  //open file in write mode
  fp = fopen(argv[1],"w");

  //copy buffer data in to file
  for(i=0;p[i];i++)
    fputc(p[i],fp);

  printf("Case conversion successful\n");
  fclose(fp);//close file from write mode
}
