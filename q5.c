// BY: Deepanshu Mittal
// program to print the picture 5

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=0;i<=4;i++)
        {       for(j=5;j>i;j--)
                printf("%c",j+64+i);

                printf("\n");
        }
}

