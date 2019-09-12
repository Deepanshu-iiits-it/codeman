// BY: Deepanshu Mittal
// program to read a,b,c such that ax+by+c=0 be the equation of a line and print its slope. also print whether line is verticle or not

#include<stdio.h>

void main()
{
        float a,b,c;
        float m;
        printf("\n enter the three parameters:");
        scanf("%f %f %f",&a,&b,&c);
        m=(-1)*a/b;
        if(m==0)
              printf("\n the line is horizontal");
	else if(b==0)
               printf("\n the line is vertical");
	else 
                printf("\n the slope of the line is %f",m);
}


