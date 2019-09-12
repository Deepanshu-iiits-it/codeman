// BY: Deepanshu Mittal
// program to read a, b, c such that ax^2+bx+c=0 be a quadratic equation.if roots are real and distinct then both roots are printed. if roots are equal then only one root is printed.
// if roots are imaginery then real and complex parts of both the roots are printed.
// example: input: 1 8 25
// 	output: -4 and 3

#include<stdio.h>
#include<math.h>
void main()
{
        float a,b,c;
        float d;
        printf("\n enter the three numbers:");
        scanf("%f %f %f",&a,&b,&c);
        d=b*b-4*a*c;
        if(d>0)
	{       float r1=(-b+sqrt(d))/(2*a);
	float r2=(-b-sqrt(d))/(2*a);
	printf("\n the roots are %f and %f",r1,r2);
	}
	else if(d==0)
                printf("\n the roots are equal to %f ",-b/(2*a));
	     else 
	     {float x = (-b/(2*a));
	       float y=(sqrt(4*a*c-b*b))/(2*a);
               printf("\n the roots are complex with real part= %f and imaginery part = %f",x,y);
	     }

}
