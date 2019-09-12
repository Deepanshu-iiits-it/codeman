// BY: Deepanshu Mittal
// program to read four numbers and print the biggest number

#include<stdio.h>

void main()
{
        int a,b,c,d;
        int m;
        printf("\n enter the four numbers:");
        scanf("%d %d %d %d",&a,&b,&c,&d);
        m=a;
        if(b>m)
                m=b;
        if(c>m)
                m=c;
	if(d>m)
		m=d;
        printf("\n the biggest number is %d",m);
}


