// BY: Deepanshu Mittal
// program to print the picture 4

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=5;i>0;i--)
        {       for(j=i;j<2*i;j++)
                printf("%c",j+64);

                printf("\n");
        }
}

