//Program to merge the lines from two files and store the result into another file
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
  if(argc != 4)
  {
    printf("Usage: ./a.out file1 file2 file3\n");
    return 0;
  }
  
  //Open files
  FILE *fp1=fopen(argv[1],"r");
  FILE *fp2=fopen(argv[2],"r");
  FILE *fp3=fopen(argv[3],"w");

  if(fp1 == NULL)
  { 
    printf("%s: No such file or directory\n",argv[1]);
    return 0;
  }

  if(fp2 == NULL)
  { 
    printf("%s: No such file or directory\n",argv[2]);
    return 0;
  }

  //Finding file1 size
  int size1;
  fseek(fp1,0,SEEK_END);
  size1=ftell(fp1);
  rewind(fp1);

  //Allocating DMA buffer and copying file1 data to buffer
  char *buf1=(char*)malloc((size1+1)*sizeof(char));

  //Finding file2 size
  int size2;
  fseek(fp2,0,SEEK_END);
  size2=ftell(fp2);
  rewind(fp2);

  //Allocating DMA buffer and copying file2 data to buffer
  char *buf2=(char*)malloc((size2+1)*sizeof(char));

  //Merge files
  fread(buf1,sizeof(char),size1,fp1);
  fwrite(buf1,sizeof(char),size1,fp3);
  
  fread(buf2,sizeof(char),size2,fp2);
  fwrite(buf2,sizeof(char),size2,fp3);
 
  //Close files
  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
  printf("Merging two files is successful\n");
}
