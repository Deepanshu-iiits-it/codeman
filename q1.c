// BY: Deepanshu Mittal
// program to print the picture 1

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=1;i<=5;i++)
	{	for(j=1;j<=20;j++)
                if(i%2==0 && j%2==0)
                printf("0");
		else printf("*");

		printf("\n");
	}
}

