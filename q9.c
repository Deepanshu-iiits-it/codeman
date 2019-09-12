// BY: Deepanshu Mittal
// program to read five numbers a, b, c, d and x such that a,b,c and d are distinct and x is equal to exactly one of a or b or c or d. the program outputs which is equal to x
// example: input: 1 8 25 21 8
//      output: x is equal to b

#include<stdio.h>
#include<math.h>
void main()
{
        int a,b,c,d,x;
        
        printf("\n enter the five numbers:");
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&x);
        
        if(x==a)
          printf("\n x is equal to a");
        
          else if(x==b)
                printf("\n x is equal to b");
             else if(x==c)
	            printf("\n x is equal to c");
	        else if(x==d)
			printf("\n x is equal to d");
			else
				printf("\n invalid input");
		           

}


