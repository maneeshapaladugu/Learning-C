#include<stdio.h>
int main()
{
  //To find grade of the mark input
  int m;
  printf("Enter your mark\n");
  scanf("%d",&m);
  printf("Your grade is:\n"); 
  if(m>=80)
     printf("A grade\n");
  else if(m>=70)
     printf("B grade\n");
  else if(m>=60)
     printf("C grade\n");
  else if(m>=50)
     printf("D grade\n");
  else if(m>=40)
     printf("E grade\n");
  else     
     printf("Failed in the exam\n");
}
