// BY: Deepanshu Mittal
// program to print all numbers between 20 and 40, and all even numbers between 50 and 80

#include<stdio.h>

void main()
{
        int i;
        for(i=20;i<=40;i++)
                printf("%d ",i);
	for(i=50;i<=80;i+=2)
		printf("%d ",i);
}

