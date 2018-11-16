//Program to implement move(mv) command
#include<stdio.h>
int main(int argc,char **argv)
{
  char ch;
  if(argc!=3)
  {
    printf("Usage: ./mv src_file dest_file\n");
    return 0;
  }

  //open src file in read mode
  FILE *fs=fopen(argv[1],"r");
  if(fs==NULL)
  {
    printf("%s: No such file or directory\n",argv[1]);
    return 0;
  }

  //open dest file in write mode
  FILE *fd=fopen(argv[2],"w");
  
  //copy src to dest
  while((ch=fgetc(fs)) != EOF)
   fputc(ch,fd);

  printf("File moved successfully\n");

  //remove dest file
  remove(argv[1]);
}
