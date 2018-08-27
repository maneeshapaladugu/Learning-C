#include<stdio.h>
int main()
{
   float r_area,r_perimeter,c_area,c_perimeter,l,b,r;
   //rectangle area=l*b    rectangle perimeter=2*l+2*b  
   //circle area=pi*r*r   circle perimeter=2*Pi*r   
   printf("Enter length,breadth,radius\n");
   scanf("%f%f%f",&l,&b,&r);
   r_area=l*b;
   r_perimeter=2*(l+b);
   c_area=3.14*r*r;
   c_perimeter=2*3.14*r;
   printf("Area and perimeter of a Rectangle:\n%f %f\n",r_area,r_perimeter);
   printf("Area and perimeter of a Circle:\n%f %f\n",c_area,c_perimeter);
}

