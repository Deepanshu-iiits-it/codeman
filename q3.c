// BY: Deepanshu Mittal
// program to print all even numbers less than 50 and all odd numbers more than 50 

#include<stdio.h>

void main()
{
        int i;
        while(i<50)
	{	if(i%2==0)
		printf("%d ",i);
		i++;
	}

	while(i>=50)
	{	if(i%2!=0)
                printf("%d ",i);
		i++;
	}
}

