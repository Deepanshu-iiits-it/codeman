// BY: Deepanshu Mittal
// program to read a,b and c such that ax+by+c=0 be the equation of a line and output its slope
// example: input: 3 5 8
// output: -0.6

#include<stdio.h>
#include<math.h>
void main()
{
        float a,b,c;
        float slope;
        printf("\n enter the parametric constants a, b, c of any straight line:");
        scanf("%f %f %f",&a,&b,&c);
        slope=(-1)*(a/b);
        printf("\n slope of the given straight line = %f",slope);
}

