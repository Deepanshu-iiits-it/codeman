// BY: Deepanshu Mittal
// program to print the picture (12)

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=1;i<6;i++)
        {       for(int s=4;s>=i;s--)
		printf(" ");
		for(j=1;j<=i;j++)
                printf("%c",j+64);
                for(int k=i-1;k>=1;k--)
                        printf("%c",k+64);

                printf("\n");
        }
}

