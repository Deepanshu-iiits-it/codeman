// BY: Deepanshu Mittal
// program to print the picture (15)

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=1;i<=6;i++)
        {       for(j=0;j<i;j++)
                printf("%c",i+j+64);
                
                printf("\n");
        }
}

