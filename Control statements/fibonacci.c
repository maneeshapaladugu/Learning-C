#include <stdio.h>
int main()
{   //To display fibonacci series in the given range
    int x=0,y=1,z=0,n;
    printf("Enter range\n");
    scanf("%d",&n);
    printf("%d %d",x,y);
    z=x+y;
    while(z<=n)
    {
        printf(" %d",z);
        x=y;
        y=z;
        z=x+y;
    }
    printf("\n");
}
