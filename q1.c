// BY: Deepanshu Mittal
// program to read a,b and c as sides of a triangle and prints area
// example: input: 5 7 10
// output: 16.24

#include<stdio.h>
#include<math.h>
void main()
{
        int a,b,c;
	float area;
        printf("\n enter the the three sides of any triangle:");
        scanf("%d %d %d",&a,&b,&c);
	float s=(a+b+c)/2;
	area= sqrt(s*(s-a)*(s-b)*(s-c));
        printf("\n area of the given triangle = %f",area);
}

