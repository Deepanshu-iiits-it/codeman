// BY: Deepanshu Mittal
// program to read coordinates of two points and outputs their midpoint.
// example: input: 7 2 -3 1
// output: (2,1.5)

#include<stdio.h>

void main()
{
        float a,b,c,d;

        printf("\n enter the coordinates of the two points:");
        scanf("(%f,%f) (%f,%f)",&a,&b,&c,&d);

        printf("\nthe coordinates of the mid-point are: (%.1f,%.1f)",(0.5)*(a+c),(0.5)*(d+b));
}

