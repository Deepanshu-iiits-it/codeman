// BY: Deepanshu Mittal
// program to print the picture 9

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=1;i<=5;i++)
        {      int n=i*(i+1)/2;
		for(j=1;j<=n;j++)
                printf("%c",'A');

                printf("\n");
        }
}

