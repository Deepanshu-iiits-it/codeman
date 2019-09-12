// BY: Deepanshu Mittal
// program to read a,b,c,d and e and prints the distance between (a,b) and line cx+dy+e=0s sides of a triangle and prints area
// example: input: 6 7 3 4 2
// output: 9.6

#include<stdio.h>
#include<math.h>
void main()
{
        float a,b,c,d,e;
        float distance;
        printf("\n enter the a, b, c, d, e:");
        scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
        distance= (a*c+b*d+e)/(sqrt(c*c+d*d));
        printf("\n distance between point (a,b) and line cx+dy+e=0 : %f",distance);
}

