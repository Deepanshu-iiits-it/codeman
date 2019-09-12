// BY: Deepanshu Mittal
// program to print all numbers between 10 and 19, 30 and 39, 50 and 59 ... 90 and 99

#include<stdio.h>

void main()
{
        int i;
        for(i=10;i<100;i++)
		if((i/10)%2!=0)
                printf("%d, ",i);
}

