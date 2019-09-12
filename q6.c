// BY: Deepanshu Mittal
// program to print all numbers which are even but not a multiple of either 3 or 5

#include<stdio.h>

void main()
{
        int i;
        for(i=0;;i+=2)
		if(i%3!=0 || i%5!=0)
                printf("%d ",i);
}

