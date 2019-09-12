// BY: Deepanshu Mittal
// program to read a,b,c as sides of a triangle and prints whether angle A is 90 or not

#include<stdio.h>
#include<math.h>
void main()
{
        float a,b,c;
        
        printf("\n enter the three sides of a triangle:");
        scanf("%f %f %f",&a,&b,&c);
        
        if(c==sqrt(a*a+b*b))
        printf("\n the angle A is 90");
	else
        printf("\n the angle A is not 90");
}


