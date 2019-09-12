// BY: Deepanshu Mittal
// program to output the cross product of vectors.

#include<stdio.h>
#include<math.h>
void main()
{
        float a,b,c,d,e,f;

        printf("\n enter the two vectors:");
        scanf("%fi%+fj%+fk %+fi%+fj%+fk",&a,&b,&c,&d,&e,&f);
	
        printf("\nthe vector product of the given two vectors is: %.2fi%+.2fj%+.2fk",(b*f-e*c),(d*c-e*f),(a*e-b*d));
}

