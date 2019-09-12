// BY: Deepanshu Mittal
// program to read 6 (integer type) numbers a,b,c,d,e,f and print a and b in the first line and c,d,e and f in the second line such that c and d are outputted below a and e and f are outputted below b
// assume that any of these numbers may have at most 10 digits.

#include<stdio.h>

void main()
{
        int a,b,c,d,e,f;

        printf("\n enter the six numbers:");
        scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);

        printf("\n%-20d  %-20d \n%-10d %-10d %-10d %10d",a,b,c,d,e,f);
}

