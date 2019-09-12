// BY: Deepanshu Mittal
// program to print the picture (23)

#include<stdio.h>

void main()
{
        int i=1,j=21;
        for(i=1;i<=6;i++)
        {      int n=22-(i*(i+1)/2);
	       	for(j=n;j<i+n;j++)
                printf("%c",j+64);
                
                printf("\n");
        }
}

