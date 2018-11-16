//Program to replace a Specified line in a given text file
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
  
  //open temporary file with write mode for replacement operation 
  FILE *ftemp = fopen("temp.txt","w");  
  char buf1[100] = {};
  char buf2[100] = {};
  
  printf("Enter the text to be replaced in specified line\n");
  gets(buf2);
  
  int line_count = 0;
  int line_num = atoi(argv[2]);
  while((fgets(buf1,sizeof(buf1),fp)) != NULL)
  {
     line_count ++;
     
     if(line_count == line_num)
     {
       //copy the text to be replaced in to temporary file
       fputs(buf2,ftemp);
       fputc('\n',ftemp);
     }
     //copy the remaining content 
     else
       fputs(buf1,ftemp);
  }
  
  //rename("temp.txt",argv[1]);
  fclose(fp);
  fclose(ftemp);
  
  fp = fopen(argv[1],"w");//open original file with write mode
  ftemp = fopen("temp.txt","r");//open temporary file with read mode
  
  //copy temporary file content to original file
  char ch;
  while((ch=fgetc(ftemp)) != EOF)
    fputc(ch,fp);
  fclose(fp);
  fclose(ftemp);
  printf("Specified line replaced successfully\n");
}
