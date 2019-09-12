// BY: Deepanshu Mittal
// program to print the picture (26)

#include<stdio.h>

void main()
{
        int i,j;
        for(i=4;i<=10;i++)
	{ for(j=0;j<=30;j+=i)
                printf("%d,",j);
		printf("\n");
	}
}

