// BY: Deepanshu Mittal
// program to read a,b and c such that x^2+y^2+ax+by+c=0 be equation of a circle and print its center and radius
// example: input: 10 -6 -2
// output: center(-5,3) and radius=6 

#include<stdio.h>
#include<math.h>
void main()
{
        float a,b,c;
        
        printf("\n enter the a ,b and c:");
        scanf("%f %f %f",&a,&b,&c);
        float c1=(-0.5)*a, c2=(-0.5)*b, rad=sqrt(c1*c1 + c2*c2 - c);
	        
        printf("\n center(%.2f,%.2f) and radius= %.2f",c1,c2,rad);
}

