// BY: Deepanshu Mittal
// program to read equation of a line and outputs its point of intersection with x-axis

#include<stdio.h>

void main()
{
        float a,b,c;

        printf("\n enter the equation of a line:");
        scanf("%fx%fy%f=0",&a,&b,&c);

        printf("\nthe coordinates of the point of intersection of the line with the x axis is: (%.1f,0)",(-1)*(c/a));
}

