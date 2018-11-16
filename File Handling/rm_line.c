//Write a Program to remove a Specific line from the given text file
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
  if(argc != 3)
  {
    printf("Usage: ./a.out filename line_num\n");
    return 0;
  }
  
  FILE *fp = fopen(argv[1],"r");
  if(fp == NULL)
  {
    printf("%s: No such file or directory\n",argv[1]);
    return 0;
  }

  //open temporary file with write mode for remove operation
  FILE *ftemp = fopen("temp.txt","w");  
  char buf[100] = {};
  
  int line_count = 0;
  int line_num = atoi(argv[2]);
  while((fgets(buf,sizeof(buf),fp)) != NULL)
  {
     line_count ++;
     
     //copy all lines to temp file except the line to be deleted 
     if(line_count == line_num)
       continue;
     else
       fputs(buf,ftemp);
  }
  
  //rename("temp.txt",argv[1]);
  fclose(fp);
  fclose(ftemp);
  
  fp = fopen(argv[1],"w");//open original file with write mode
  ftemp = fopen("temp.txt","r");//open temporary file with read mode
  
  //copy the temporary file content in to original file
  char ch;
  while((ch=fgetc(ftemp)) != EOF)
    fputc(ch,fp);

  fclose(fp);
  fclose(ftemp);
  printf("Specified line removed successfully\n");
}
