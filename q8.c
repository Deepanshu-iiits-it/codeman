// BY: Deepanshu Mittal
// program to print all numbers which are either multiple of 3 or 5 but not both
// example: 3 5 6 9 10 12 18 20 ....

#include<stdio.h>

void main()
{
        int i;
        for(i=2;;i++)
		if(i%3==0 && i%5==0)
			continue;
		else if(i%3==0 || i%5==0)
                printf("%d ",i);
}

