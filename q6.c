// BY: Deepanshu Mittal
// program to read a no. and print its second last digit
// example: input: 5122
// output: 2

#include<stdio.h>
#include<math.h>
void main()
{
        int l;
        printf("\n enter the number:");
        scanf("%d",&l);
        printf("\n the second last digit of the given no. = %d",(l/10)%10);
}

