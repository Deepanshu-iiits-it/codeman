// BY: Deepanshu Mittal
// program to print the picture (28)

#include<stdio.h>

void main()
{
        int i,j,k,c=0;
        for(i=1;i<=6;i++)
        {       j=i*(i+1)/2;
		for(k=1;(k*(k+1)/2)<=j;k++)
		{int t=k;
		k=(k*(k+1)/2);
	        printf("%d ",k);
		k=t;
		}
		
                printf("\n");
        }
}

