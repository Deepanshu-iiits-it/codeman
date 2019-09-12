// BY: Deepanshu Mittal
// program to print multiplication and division of complex numbers

#include<stdio.h>

void main()
{
        float a,b,c,d;

        printf("\n enter the two complex numbers:");
        scanf("%f %f %f %f",&a,&b,&c,&d);

        printf("\nthe mulptiplication gives= %.2f%+.2fi and division gives= %.2f%+.2fi",(a*c-b*d),(a*d+b*c),((a*c-b*d)/(c*c-d*d)),((b*c+a*d)/(c*c-d*d)));
}

