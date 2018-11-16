//Write a Program to reverse contents of text file
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
  if(argc != 2)
  {
    printf("Usage: ./a.out filename\n");
    return 0;
  }
  
  FILE *fp = fopen(argv[1],"r");
  if(fp == NULL)
  {
    printf("%s: No such file or directory\n",argv[1]);
    return 0;
  }

  fseek(fp,0,SEEK_END);//moving forward to end of file
  int size=ftell(fp);
  fseek(fp,-1,SEEK_END);
  
  //open temporary file with write mode 
  FILE *ftemp = fopen("temp.txt","w");  

  char ch;
  while(size--)
  {
    ch=fgetc(fp);
    fputc(ch,ftemp);
    fseek(fp,-2,SEEK_CUR);
  }
  //rename("temp.txt",argv[1]); (or)
  
  fclose(fp);
  fclose(ftemp);
  
  fp = fopen(argv[1],"w");//open original file with write mode
  ftemp = fopen("temp.txt","r");//open temporary file with read mode
  
  //copy the temporary file content in to original file
  while((ch=fgetc(ftemp)) != EOF)
    fputc(ch,fp);

  fclose(fp);
  fclose(ftemp);

  printf("File contents reversed\n");
}
