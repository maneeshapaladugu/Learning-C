#include<stdio.h>
int main()
{
 //To rotate bits of a number
 int n,r,msb,lsb,s=sizeof(int)*8-1,choice;
 printf("Enter a number and no-of rotations\n");
 scanf("%d%d",&n,&r);
 printf("1. Left rotate\t2. Right rotate\n");
 printf("Enter your choice\n");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1: //Left rotate
   for(int i=0;i<r;i++)
   {
    msb=(n>>s)&1;//store msb before shift on n
    n=n<<1;//left shift n
    n=n|msb;//add at lsb
   }
   printf("n=%d\n",n);//decimal after rotate
   for(int i=s;i>=0;i--)
   {
    printf("%d",(n>>i)&1);//binary equalent after rotate
   }
   break;
  case 2: //right rotate
   for(int i=0;i<r;i++)
   {
    lsb=(n&1)<<s;//store lsb before shift on n
    n=n>>1;//right shift n
    n=n|lsb;//add at msb
   }
   printf("n=%d\n",n);//decimal after rotate
   for(int i=s;i>=0;i--)
   {
    printf("%d",(n>>i)&1);//binary equalent after rotate
   }
   break;
  default:
   printf("Invalid choice\n");
 }
}
