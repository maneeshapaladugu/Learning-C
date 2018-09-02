#include<stdio.h>
int main()
{
 //To rotate bits of a given number
 int n,r,choice;
 printf("Enter a number and no-of rotations\n");
 scanf("%d%d",&n,&r);
 printf("1. Left rotate\t2. Right rotate\n");
 printf("Enter your choice\n");
 scanf("%d",&choice);
 switch(choice)
 {
   case 1: //Left rotate
     printf("Before left rotate\n");
     for(int i=31;i>=0;i--)
        printf("%d",(n>>i)&1);
     n=n>>32-r|n<<r;
     printf("\nAfter left rotate\n");
     for(int i=31;i>=0;i--)
        printf("%d",(n>>i)&1);
     printf("\n");
        break;33

  case 2: //right rotate
     printf("Before right rotate\n");
     for(int i=31;i>=0;i--)
        printf("%d",(n>>i)&1);
     n=n<<32-r|n>>r;
     printf("\nAfter right rotate\n");
     for(int i=31;i>=0;i--)
        printf("%d",(n>>i)&1);
     printf("\n");
        break;
     default:
        printf("Invalid choice\n");
 }
}
