#include<stdio.h>
int main()
{
    int n,ct,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    ct=~n+1;
    printf("Binary of %d after 2's complement:\n",n);
    for(i=31;i>=0;i--)
        printf("%d",ct>>i&1);
    printf("\n");
    printf("Decimal value of %d after 2's complement:\n",n);
    printf("%d\n",ct);
    printf("Octal value of %d after 2's complement:\n",n);
    printf("%o\n",ct);
    printf("Hexadecimal value of %d after 2's complement:\n",n);
    printf("%x\n",ct);
}

