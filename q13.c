// BY: Deepanshu Mittal
// program to print all those numbers whose first digit leaves remainder 1 when divided by 3
// example: 10, 11 .... 19, 40, 41 ..... 49, 70, 71......79.

#include<stdio.h>

void main()
{
        int i;
        for(i=10;i<100;i++)
                if((i/10)%3==1)
                printf("%d, ",i);
}

