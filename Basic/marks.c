#include<stdio.h>
void main()
{
  //To find the average and percentage marks of 5 subjects
  int m1,m2,m3,m4,m5,total;
  float average,percentage;
  printf("Enter marks in 5 subjects\n");
  scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
  total=m1+m2+m3+m4+m5;
  average=total/5;
  percentage=((float)total/500)*100;
  printf("Total=%d\n",total);
  printf("The average of five subjects is %f\n",average);
  printf("Percentage=%f%%\n",percentage);
}
