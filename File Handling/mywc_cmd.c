//Program to implement wc command(word count)
#include<stdio.h>
int main(int argc,char *argv[])
{
  if(argc != 2)
  {
    printf("Usage: ./wc filename\n");
    return 0;
  }	  
  FILE *fp;
  fp = fopen(argv[1],"r");

  if(fp == NULL)
  {
    printf("%s: No such file or directory\n",argv[1]);
    return 0;
  }
  printf("Lines Words Char's Filename\n");

  //No of lines
  char ch;
  int lines = 0;
  while((ch = fgetc(fp)) != EOF)
  {
    if(ch=='\n')
      lines ++;
  }
  rewind(fp);
  printf("  %d",lines);  

  //No of words
  char arr[20];
  int words=0;
  while(fscanf(fp,"%s",arr) != EOF)
    words ++;
  printf("     %d",words);  
  rewind(fp);

  //No of characters
  int chars= 0;
  while((ch = fgetc(fp)) != EOF)
   chars ++;
  printf("     %d",chars);

  //Filename
  printf("     %s\n",argv[1]);
}

