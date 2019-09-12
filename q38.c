// BY: Deepanshu Mittal
// program to print the picture (28)

#include<stdio.h>

void main()
{
        int i,j,k,n=1;
        for(i=1;i<=6;i++)
        {       j=i*(i+1)/2;
		k=1;
		while(k<=j)
		{
		int n=1+(n*(n+1)/2);
		
                printf("%d ",k);
	        k+=n;
		}
                printf("\n");
        }
}

