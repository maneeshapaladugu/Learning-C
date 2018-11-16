//Program to implement sort command
//Sort lines of text files
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
  if(argc != 2)
  {
    printf("Usage: ./a.out filename\n");
    return 0;
  }
  
  //Open file with read mode
  FILE *fp=fopen(argv[1],"r");
  
  if(fp == NULL)
  { 
    printf("%s: No such file or directory\n",argv[1]);
    return 0;
  }
  
  char **buf=NULL,arr[100],*temp;
  int size,cnt=0,i,j;
  while(fgets(arr,100,fp))
  {
    size=strlen(arr);
    buf=(char**)realloc(buf,(cnt+1)*(sizeof(*buf)));
    buf[cnt]=(char*)calloc(sizeof(char),size+1);
    for(i=0;i<size;i++)
      buf[cnt][i]=arr[i];
    cnt++;
  }
  fclose(fp);

  for(i=1;i<cnt;i++)
  {
    for(j=0;j<cnt-i;j++)
    {
      if(buf[j][0] > buf[j+1][0])
      {
        temp=buf[j];
	buf[j]=buf[j+1];
	buf[j+1]=temp;
      }
    }
  }
  
  for(i=0;i<cnt;i++)
    printf("%s",buf[i]);
  return 0;

  fp=fopen(argv[1],"w");
  for(i=0;i<cnt;i++)
    fputs(buf[i],fp);
  fclose(fp);
  return 0;
}
