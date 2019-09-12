// BY: Deepanshu Mittal
// program to read h,k,r and s such that a circle has center (h,k) and radius r. let line x=s intersects the circle. the program should calculate the chord length.
// example: input: 2 4 13 7
// output: 24

#include<stdio.h>
#include<math.h>

void main()
{
        float h,k,r,s;
        float l,dist,a;
        printf("\n enter all the parameters h,k,r and s:");
        scanf("%f %f %f %f",&h,&k,&r,&s);
        
	dist=h-s;
	a=sqrt(r*r-dist*dist);
	l=2*a;
        printf("\n length of the chord = %f",l);
}

