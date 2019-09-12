// BY: Deepanshu Mittal
// program to print the picture 11

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=1;i<=10;i++)
        {       for(j=1;j<=15;j++)
                if(i%2!=0  && ((j%2!=0&&j>i)||(j<i)))
                printf("*");
                else if(i%2==0 && (j>i&&j%2!=0))
			printf("*");
		else printf("0");

                printf("\n");
        }
}

