// BY: Deepanshu Mittal
// program to read six numbers a,b,c,d,e,f as coordinates of end points of a triangle and prints its area
// example: input: 7 3 11 3 7 6
// output: 6

#include<stdio.h>
#include<math.h>
void main()
{
        int a,b,c,d,e,f;
        float area;
        printf("\n enter the the three coordinates  of the end points of any triangle:");
        scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
        area= 0.5*a*(d-f) + 0.5*c*(f-b) + 0.5*e*(b-d);
        printf("\n area of the given triangle = %f",area);
}

