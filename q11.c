// BY: Deepanshu Mittal
// program to read quadratic equation and outputs its roots

#include<stdio.h>
#include<math.h>
void main()
{
        float a,b,c,d;

        printf("\n enter the quadratic equation:");
        scanf("%fx^2%fx%f=0",&a,&b,&c);
	d=b*b-4*a*c;
	if(d<0)
		printf("\n the roots are: %.1f+%.1fi and %.1f-%.1fi",(-0.5)*b/a,sqrt(fabs(d))*(0.5)/a,(-0.5)*b/a,sqrt(fabs(d))*(0.5)/a);
	else if(d==0)
		printf("\n the root is:%.1f",(-0.5)*b/a);
	else
		printf("\n the roots are:%.1f and %.1f",((-0.5)*b/a)+(sqrt(d))*(0.5)/a,((-0.5)*b/a)-(sqrt(d))*(0.5)/a);
}

