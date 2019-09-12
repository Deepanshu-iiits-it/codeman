// BY: Deepanshu Mittal
// program to read  4 (float type) numbers a,b,c and d and print a and b in the first line and c and d in the second line such that c is outputted below a and d is outputted below b
// a and b have 3 decimal places, c has 5 decimal places, d has 1 decimal place.

#include<stdio.h>

void main()
{
        float a,b,c,d;

        printf("\n enter the four numbers:");
        scanf("%f %f %f %f",&a,&b,&c,&d);
        printf("\n%-0.3f   %-0.3f\n%-0.5f %-0.1f",a,b,c,d);
}

