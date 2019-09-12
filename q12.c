// BY: Deepanshu Mittal
// program to read p, q, r, a, b, c such that ax+by+c=0 be a line and (p,q) be the center of the circle with radius r. the program finds whether the circle and the line intersects or not. if they intersect : let A and B be the pointsof intersection of circle and the line. find the area of the triangle formed by A, B and the center of the circle.
// example: input: 5 4 10 1 1 20
//      output: no intersection

#include<stdio.h>
#include<math.h>
void main()
{
        float a,b,c,p,q,r;

        printf("\n enter the coordinates of center of the circle and its radius and the parametric coefficients of the equation of line");
        scanf("%f %f %f %f %f %f",&p,&q,&r,&a,&b,&c);
	
	float dist,distsq;
	dist=((a*p) + (b*q) + c)/(sqrt(a*a + b*b));
	distsq=(dist*dist);
if(sqrt(distsq)>=r)
	printf("\n do not intersect");
else if(sqrt(distsq)<r)
{   float l=2*(sqrt((r*r)-distsq));
	float area=(0.5)*l*(sqrt(distsq));
          printf("\n area of the triangle formed = %.2f",area);

}

}

