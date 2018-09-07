#include<stdio.h>
int main()
{
//factorial of a number   
    int n,fact=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n)
    {
       fact=fact*n--;
    }
    printf("Fact=%d\n",fact);
}

