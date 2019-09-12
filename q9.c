// BY: Deepanshu Mittal
// program to print the picture 9

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=1;i<=9;i++)
        {       for(j=1;j<=20;j++)
                if(i>=4 &&(i+j>=10 && i+3>=j))
                printf("0");
                else printf("*");

                printf("\n");
        }
}

