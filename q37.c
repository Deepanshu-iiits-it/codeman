// BY: Deepanshu Mittal
// program to print the picture (27)

#include<stdio.h>

void main()
{
        int i,j,n;
        for(i=8,n=4;n<=10;i--,n++)
	{	for(j=0;j<i;j++)
		printf("%d,",j*n);

                printf("\n");
	}
}

