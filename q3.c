// BY: Deepanshu Mittal
// program to read two numbers and print both the numbers s.t. the bigger number is printed first

#include<stdio.h>

void main()
{
        int a,b;
        
        printf("\n enter the two numbers:");
        scanf("%d %d",&a,&b);
        
        if(b>a)
              printf("\n %d %d",b,a);
	else
		printf("\n %d %d",a,b);
		
}


