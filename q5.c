// BY: Deepanshu Mittal
// program to print all numbers which are either between 50 and 70, or less than 20, or more than 90.

#include<stdio.h>

void main()
{
        int i=0;
        for(i=0;i<20;i++)
                printf("%d ",i);
	for(i=51;i<70;i++)
		printf("%d ",i);
	for(i=91;i>90;i++)
		printf("%d ",i);
}

