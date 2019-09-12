// BY: Deepanshu Mittal
// program to print the picture 3

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=1;i<=4;i++)
        {       for(j=1;j<=10;j++)
                if((i+j)%2==0)
                printf("0");
                else printf("*");

                printf("\n");
        }
}

