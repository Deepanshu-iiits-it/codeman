// BY: Deepanshu Mittal
// program to exchange last two digits of the given number
// example: input: 5234
// output: 5243

#include<stdio.h>
#include<math.h>
void main()
{
        int l;
        printf("\n enter the number:");
        scanf("%d",&l);
        printf("\n the new number after exchanging the last two digits of the given number = %d",(l/100)*100+10*(l%10)+(l/10)%10);
}

