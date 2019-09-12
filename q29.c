// BY: Deepanshu Mittal
// program to print the picture (19)

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=6;i>=1;i--)
        {       for(int s=1;s<i;s++)
		printf(" ");
		for(j=i;j<=6;j++)
                printf("%c",j+64);
                

                printf("\n");
        }
}

