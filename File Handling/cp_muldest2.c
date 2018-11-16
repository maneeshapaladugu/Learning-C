//Program to copy one source file in to multiple destination files
//if any dest file is already exists, program needs user permission through keyboard 
//whether destination file needs to be overwritten or not 
#include<stdio.h>
int main(int argc,char *argv[])
{
  int i;
  char ch,op;
  if(argc < 3)
  {
    printf("Usage:./cp src dst1 dst2 dst3 dst4...\n");
    return 0;
  }

  //open src file with read mode
  FILE *fs;
  fs=fopen(argv[1],"r");
  
  if(fs == NULL)
  {
    printf("%s : No such file or directory\n",argv[1]);
    return 0;
  }
  
  FILE *fd;
  for(i=2;i<argc;i++)
  {
    fd = fopen(argv[i],"r");//open dest file with read mode
    if(fd != NULL)
    {
      printf("%s : exists. Do you want to overwrite the existing file contents(y/n)\n",argv[i]);
   //  __fpurge(stdin);
       scanf(" %c",&op);
       if(op != 'y')
         continue;
    }
    if(fd == NULL || op=='y')
    {
      fd = fopen(argv[i],"w");//open dest file with write mode
      while((ch = fgetc(fs)) != EOF)
        fputc(ch,fd);
      fclose(fd);
      rewind(fs);
    }
  }
}

