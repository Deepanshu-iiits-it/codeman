// BY: Deepanshu Mittal
// program to print the picture (4)

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=1;i<=4;i++)
        {       for(j=1;j<=i;j++)
                printf("%c",i+64);
        }
}

