// BY: Deepanshu Mittal
// program to print all odd numbers between 0 and 9, 20 and 29, 40 and 49, ... , 80 and 89 and all even numbers between 10 and 19, 39 and 39, ... , 90 and 99


#include<stdio.h>

void main()
{
        int i;
        for(i=0;i<100;i++)
                if(((i/10)%2)!=(i%2))
                printf("%d, ",i);
}

