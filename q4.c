// BY: Deepanshu Mittal
// program to print all even numbers between 20 and 40, and odd numbers between 50 and 80

#include<stdio.h>

void main()
{
        int i;
        for(i=20;i<=40;i+=2)
                printf("%d ",i);
	for(i=51;i<80;i+=2)
		printf("%d ",i);
}

