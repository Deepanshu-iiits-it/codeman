// BY: Deepanshu Mittal
// program to print the picture 6

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=5;i>0;i--)
        {       for(j=1;j<=i;j++)
                printf("%c",i+64);

                printf("\n");
        }
}

