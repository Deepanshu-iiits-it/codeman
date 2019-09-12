// BY: Deepanshu Mittal
// program to print the picture (12)

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=1;i<6;i++)
        {       int n=i*(i+1)/2;
		for(j=i;j<=n;j++)
                printf("%c",j+64);
                
                printf("\n");
        }
}

