// BY: Deepanshu Mittal
// program which reads 4 numbers a, b, c and p. Let f(x)=ax^2+bx+c be a function. the program outputs the value of f(p). 
// example:input: 4 3 -1 2
// 	    output:4(2)^2 + 3(2) + 1 = 23 
#include<stdio.h>
#include<math.h>
void main()
{
        int a,b,c,p;
        printf("\n enter the four numbers:");
        scanf("%d %d %d %d",&a,&b,&c,&p);
        printf("\n f(p) = %d",a*p*p+b*p+c);
}



