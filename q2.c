// BY: Deepanshu Mittal
// program to print the picture 2

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=1;i<=10;i++)
        {       for(j=1;j<=20;j++)
                if((i<=3 && j<=8)||(i>=8 && j>=16))
                printf("0");
                else printf("*");

                printf("\n");
        }
}

