// BY: Deepanshu Mittal
// program to read three numbers and print the biggest number

#include<stdio.h>

void main()
{
        int a,b,c;
        int m;
        printf("\n enter the three numbers:");
        scanf("%d %d %d",&a,&b,&c);
        m=a;
	if(b>m)
		m=b;
	if(c>m)
		m=c;
        printf("\n the biggest number is %d",m);
}

