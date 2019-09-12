// BY: Deepanshu Mittal
// program to print the picture 10

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=10;i>0;i-=2)
        {       for(j=i;j>0;j--)
                printf("%c",'A');

                printf("\n");
        }
}

