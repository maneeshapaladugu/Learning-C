#include<stdio.h>
int main()
{
   //To find Armstrong numbers in a given range
   int r1,r2,i,sum,rem,temp;
   printf("Enter start range\n");
   scanf("%d",&r1);
   printf("Enter end range\n");
   scanf("%d",&r2);
   for(i=r1;i<=r2;i++)
   {
	temp=i;
        sum=0;
	while(temp)
	{
	    rem=temp%10;
	    sum=sum+(rem*rem*rem);
	    temp=temp/10;
	}
        if(sum==i)
        printf("%d ",i);
   }
     
}  
