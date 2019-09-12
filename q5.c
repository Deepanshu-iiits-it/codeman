// BY: Deepanshu Mittal
// program to print the picture 5

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=1;i<=5;i++)
        {       for(j=0;j<20;j++)
                if(i%2==0 && j%5!=0)
                printf("0");
                else printf("*");

                printf("\n");
        }
}

