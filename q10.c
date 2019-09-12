// BY: Deepanshu Mittal
// program to read five numbers a, b, c, d and x prints how many among a, b, c, d are equal to x
// example: input: 1 8 8 21 8
//      output: 2

#include<stdio.h>
#include<math.h>
void main()
{
        int a,b,c,d,x;
	int count=0;
        printf("\n enter the five numbers:");
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&x);

        if(x==a)
          count++;

        if(x==b)
          count++;
        if(x==c)
	  count++;	
        if(x==d)
          count++;
              
       	printf("\n x is equal to %d numbers among the given numbers",count);


}

