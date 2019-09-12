// BY: Deepanshu Mittal
// program to read two vectors and outputs their dot product.
// example: input: 2i+3j-7k 1i-2j-3k
// output: 17

#include<stdio.h>

void main()
{
        int a,b,c,d,e,f;

        printf("\n enter the two vectors:");
        scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);

        printf("\nthe dot product of the given vector: %d",(a*d+b*e+c*f));
}

