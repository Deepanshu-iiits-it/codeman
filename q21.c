// BY: Deepanshu Mittal
// program to print the picture (11)

#include<stdio.h>

void main()
{
        int i=1,j=1,k;
        for(i=1;i<=6;i++)
        {       for(j=1;j<i;j++)
                printf(" ");
		for(k=i;k<=6;k++)
			printf("%c",k+64);

                printf("\n");
        }
}

