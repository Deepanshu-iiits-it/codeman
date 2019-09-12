// BY: Deepanshu Mittal
// program to read a no. and find sum of the last two digits of the number
// example: input: 5345
// output: 4+5=9

#include<stdio.h>
#include<math.h>
void main()
{
        int l;
        printf("\n enter the number:");
        scanf("%d",&l);
        printf("\n sum of the last two digits of the given no. = %d",(l/10)%10 + (l%10));
}

