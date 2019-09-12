// BY: Deepanshu Mittal
// program to print all even numbers between 10 and 29, 40 and 59, 70 and 89

#include<stdio.h>

void main()
{
        int i;
        for(i=10;i<90;i+=2)
                if((i<29)||(i>=40&&i<59)||(i>=70&&i<89))
                printf("%d, ",i);
}

