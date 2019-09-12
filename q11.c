// BY: Deepanshu Mittal
// program to print all those numbers whose sum of both digits is multiple of 7

#include<stdio.h>

void main()
{
        int i;
        for(i=10;i<100;i++)
		if(((i%10)+(i/10))%7==0)
                printf("%d, ",i);
}

