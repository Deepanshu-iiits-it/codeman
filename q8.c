// BY: Deepanshu Mittal
// program to read two complex numbers and outputs their sum

#include<stdio.h>

void main()
{
        int a,b,c,d;

        printf("\n enter the two complex numbers:");
        scanf("%d%+di %d%+di",&a,&b,&c,&d);

        printf("\nthe sum of the given two complex numbers is: %d%+di ",(a+c),(d+b));
}

