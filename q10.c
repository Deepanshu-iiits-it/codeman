// BY: Deepanshu Mittal
// program to print all those numbers whose last digit lies between 5 and 8
// example: 5, 6, 7, 8, 15, 16, 17, 18, 25, 26, ....

#include<stdio.h>

void main()
{
        int i;
        for(i=5;;i++)
		if((i%10)>=5 && (i%10)<=8)
                printf("%d ",i);
}

