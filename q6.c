// BY: Deepanshu Mittal
// program to read a vector and outputs a unit vector in same direction.

#include<stdio.h>
#include<math.h>
void main()
{
        float a,b,c,d;

        printf("\n enter the vector:");
        scanf("%f %f %f",&a,&b,&c);
	d=sqrt(a*a+b*b+c*c);
	float e=a/d, f=b/d, g=c/d;
        printf("\nthe unit vector in the same direction is: %+.2fi%+.2fj%+.2fk",e,f,g);
}

