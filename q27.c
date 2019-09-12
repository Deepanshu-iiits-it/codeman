// BY: Deepanshu Mittal
// program to print the picture (17)

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=1;i<=6;i++)
        {       
		for(j=i;j<=6;j++)
        	for(int k=1;k<=i;k++)
			printf("%c",j+64);
                

                printf("\n");
        }
}

