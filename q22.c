// BY: Deepanshu Mittal
// program to print the picture (12)

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=1;i<=6;i++)
        {       for(j=1;j<=i;j++)
                printf("%c",j+64);
		for(int k=1;k<=6-i;k++)
			printf("%c",k+96);

                printf("\n");
        }
}

