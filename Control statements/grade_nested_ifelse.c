#include<stdio.h>
int main()
{
  //To find grade of the mark input using nested if-else
  int m;
  printf("Enter your mark\n");
  scanf("%d",&m);
  printf("Your grade is:\n");
  if(m>=70)
  {
    if(m>=80)
     printf("A grade\n");
    else
     printf("B grade\n");
  }
  else if(m>=50)
  {  
     if(m>=60)
        printf("C grade\n");
     else 
        printf("D grade\n");
  }
  else
  { 
     if(m>=40)
        printf("E grade\n");
     else
        printf("Failed in the exam\n");
  }
}




