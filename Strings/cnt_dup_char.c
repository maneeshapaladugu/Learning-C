#include<stdio.h>
int main()
{
  //To count no of times each duplicate character occurs in a given string
  char str[20];
  int i,j,k,count;
  printf("Enter a string:\n");
  gets(str);
  printf("The duplicate characters in a given string:\n");
  printf("Letter --> Count\n");

  for(i=0;str[i];i++)
  {
    count=1;
    for(j=i+1;str[j];j++)
    {
      if(str[i]==str[j])
      {
        for(k=j;str[k];k++)
          str[k]=str[k+1];
        j--;
        count++;
      }
    }
    if(count>1)
      printf("  %c    -->   %d\n",str[i],count);
   }
}

