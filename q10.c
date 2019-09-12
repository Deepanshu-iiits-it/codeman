// BY: Deepanshu Mittal
// program to print the picture 10

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=1;i<=10;i++)
        {       for(j=1;j<=20;j++)
                if(i>=3 && i+j>=10 && j<=(2*i+2) )
                printf("0");
                else printf("*");

                printf("\n");
        }
}

