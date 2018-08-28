#include<stdio.h>
int main()
{
    //Complement of a given number in different formats
    int n,ct,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    ct=~n;
    printf("Binary of %d after complement:\n",n);
    for(i=31;i>=0;i--)
        printf("%d",ct>>i&1);
    printf("\n");
    printf("Decimal value of %d after complement:\n",n);
    printf("%d\n",ct);
    printf("Octal value of %d after complement:\n",n);
    printf("%o\n",ct);
    printf("Hexadecimal value of %d after complement:\n",n);
    printf("%x\n",ct);
}
