#include<stdio.h>
int main()
{
 //To rotate bits of a given number
 unsigned int n;
 int r,msb,lsb,s=sizeof(int)*8-1,choice;
 printf("Enter a number and no-of rotations\n");
 scanf("%d%d",&n,&r);
 printf("1. Left rotate\t2. Right rotate\n");
 printf("Enter your choice\n");
 scanf("%d",&choice);
 switch(choice)
 {
   case 1: //Left rotate
     printf("Before rotate\n");
     for(int i=s;i>=0;i--)
        printf("%d",(n>>i)&1);
     for(int i=0;i<r;i++)
     {
        msb=(n>>s)&1;//store msb before shift on n
        n=n<<1;//left shift n
        n=n|msb;//add at lsb
     }
     printf("\nAfter rotate\n");
     for(int i=s;i>=0;i--)
        printf("%d",(n>>i)&1);
     printf("\n");
        break;

  case 2: //right rotate
     printf("Before rotate\n");
     for(int i=s;i>=0;i--)
        printf("%d",(n>>i)&1);
     for(int i=0;i<r;i++)
     {
        lsb=(n&1)<<s;//store lsb before shift on n
        n=n>>1;//right shift n
        n=n|lsb;//add at msb
     }
     printf("\nAfter rotate\n");
     for(int i=s;i>=0;i--)
        printf("%d",(n>>i)&1);
     printf("\n");
        break;
     default:
        printf("Invalid choice\n");
 }
}
