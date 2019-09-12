// BY: Deepanshu Mittal
// program to read a,b and c as sides of a triangle and prints the angle A in degree and radian
// example: input: 10 20 17.32
// output: 30 in degree and 0.523333 in radian

#include<stdio.h>
#include<math.h>
#define pi 3.14
void main()
{
        float a,b,c;
        float A;
        printf("\n enter the three sides of any triangle:");
        scanf("%f %f %f",&a,&b,&c);
        A=acos((c*c+b*b-a*a)/(2*b*c));
        printf("\n angle A in the given triangle = %f in degrees and %f in radians",A*180/pi,A);
}

