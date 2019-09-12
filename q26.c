// BY: Deepanshu Mittal
// program to print the picture (16)

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=6;i>=1;i--)
        {       int n=7-i;
		for(j=1;j<=i*n;j+=n)
                printf("%c",j+64);
                
                printf("\n");
        }
}

