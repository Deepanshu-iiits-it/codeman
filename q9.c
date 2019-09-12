// BY: Deepanshu Mittal
// program to delete the second last digit of the given number
// example: input: 5243
// output: 523

#include<stdio.h>
#include<math.h>
void main()
{
        int l;
        printf("\n enter the number:");
        scanf("%d",&l);
        printf("\n new no. after deleting the second last digit of the given number = %d",((l/100)*10)+(l%10));
}

