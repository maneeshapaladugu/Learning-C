#include<stdio.h>
int main()
{
  //To delete dulplicate characters of a string
  char str[10];
  int i,j,k;
  printf("Enter a string\n");
  scanf("%s",str);
  printf("Original array\n");
  printf("%s\n",str);
  for(i=0;str[i];i++)
  {
      for(j=i+1;str[j];j++)
      {
         if(str[i]==str[j])
         {
             for(k=j;str[k];k++)
                str[k]=str[k+1];
             j--;//i--;
         }
      }
  }
  printf("After deletion\n");
  printf("%s\n",str);
}

~   
