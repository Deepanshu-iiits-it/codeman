// BY: Deepanshu Mittal
// program to read  4 (integer type) numbers a,b,c and d and print a and b in the first line and c and d in the second line such that c is outputted below a and d is outputted below b
// assume that any of these numbers may have at most 10 digits.

#include<stdio.h>

void main()
{
        int a,b,c,d;
	
        printf("\n enter the four numbers:");
        scanf("%d %d %d %d",&a,&b,&c,&d);
	
	printf("\n %-10d %-10d\n %-10d %-10d",a,b,c,d);
}


