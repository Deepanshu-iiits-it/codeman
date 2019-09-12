// BY: Deepanshu Mittal
// program to double the last digit of the given number (assume that the last digit is less than 5)
// example: input: 523
// output: 526

#include<stdio.h>
#include<math.h>
void main()
{
        int l;
        printf("\n enter the number:");
        scanf("%d",&l);
        printf("\n new no. after doubling the last digit = %d",(l/10)*10+2*(l%10));
}

