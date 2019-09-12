// BY: Deepanshu Mittal
// program to print all those numbers whose last digit is multiple of 3
// example: 0, 3, 6, 9, 10, 13, 16 .....

#include<stdio.h>

void main()
{
        int i;
        for(i=0;;i++)
		if((i%10)%3==0)
                printf("%d, ",i);
}

