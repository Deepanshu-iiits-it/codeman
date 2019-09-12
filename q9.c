// BY: Deepanshu Mittal
// program to read a,b,c,d,e,f,g and h such that ax+by+cz+d=0 be a plane and x^2+y^2+z^2+ex+fy+gz+h=0 be a sphere and find the area of circle of intersection of the plane and the sphere
// example: input: 3 4 12 17 -4 -2 -2 -19
// output: 50.24

#include<stdio.h>
#include<math.h>
#define pi 3.14
void main()
{
        float a,b,c,d,e,f,g,h;
        float area_circle,radius_sphere,radius_circle,dist,x,y,z;			//(x,y,z)is the centre of the sphere and dist is the perpendicular distance of plane from center of the sphere
        printf("\n enter all the parameters:");
        scanf("%f %f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&g,&h);
        x=(-0.5)*e;
	y=(-0.5)*f;
	z=(-0.5)*g;
	radius_sphere=sqrt(x*x+y*y+z*z-h);
	dist=(a*x+b*y+c*z+d)/(sqrt(a*a+b*b+c*c));

	radius_circle=sqrt(radius_sphere*radius_sphere - dist*dist);
        area_circle=pi*radius_circle*radius_circle;
        printf("\n area of the circle of intersection of the given plane and the sphere = %f",area_circle);
}

