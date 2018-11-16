//Program to copy one source file in to multiple destination files
#include<stdio.h>
int main(int argc,char *argv[])
{
  int i;
  char ch;
  if(argc < 3)
  {
    printf("Usage:./cp src dst1 dst2 dst3 dst4...\n");
    return 0;
  }

  FILE *fs;
  fs=fopen(argv[1],"r");//src file with read mode
  
  if(fs == NULL)
  {
    printf("%s : No such file or directory\n",argv[1]);
    return 0;
  }
  
  FILE *fd;
  for(i=2;i<argc;i++)
  {
    fd = fopen(argv[i],"w");//multiple dest files with write mode
    while((ch = fgetc(fs)) != EOF)
      fputc(ch,fd);
    fclose(fd);
    rewind(fs);
  } 
}
                                     
~                                                                               
~                                          
