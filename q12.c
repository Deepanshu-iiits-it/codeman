// BY: Deepanshu Mittal
// program to print the picture 12

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=1;i<=10;i++)
        {       for(j=1;j<=20;j++)
                if((i%2==0 && i>5 && (j<5 || j>=15))||(i%2==0 && i<5))
                printf("0");
                else printf("*");

                printf("\n");
        }
}

