// BY: Deepanshu Mittal
// program to print the picture (13)

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=2;i<=6;i++)
        {       for(j=1;j<i;j++)
                printf("%c",j+96);
                for(int k=i;k<=6;k++)
                        printf("%c",k+64);

                printf("\n");
        }
}

