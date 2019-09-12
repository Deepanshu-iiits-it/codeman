// BY: Deepanshu Mittal
// program to read three numbers out of which two are same and one is different. the program outputs the different number
// example: input: 1 1 34
//      output: 34

#include<stdio.h>
#include<math.h>
void main()
{
        int a,b,c;
        int d;
        printf("\n enter the three numbers:");
        scanf("%d %d %d",&a,&b,&c);
        d=a;
        if(d==b)
              d=c;
        
        else if(d==c)
              d=b;
                else 
	            d=a;
               printf("\n the different number among the three given numbers = %d",d);
}




