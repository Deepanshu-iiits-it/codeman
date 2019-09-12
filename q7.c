// BY: Deepanshu Mittal
// program to read a, b, c, p, q and r such that ax+by+c=0 and px+qy+r=0 be the equations of line and print their point of intersection 
// example: input: 4 8 12 2 7 3
// output: (-5,1)

#include<stdio.h>
#include<math.h>
void main()
{
        float a,b,c,p,q,r;
        
        printf("\n enter the parametric constants a,b,c,p,q,r of two different straight lines:");
        scanf("%f %f %f %f %f %f",&a,&b,&c,&p,&q,&r);
        float x=(b*r-c*q)/(a*q-b*p);
	float y=(p*c-a*r)/(a*q-p*b);
        
        printf("\n point of intersection is(%.2f,%.2f)",x,y);
}

