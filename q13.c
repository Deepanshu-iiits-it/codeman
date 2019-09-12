// BY: Deepanshu Mittal
// program to read a vector and prints it in a nice form

#include<stdio.h>

void main()
{
        int a,b,c;

        printf("\n enter the vector:");
        scanf("%di%dj%dk",&a,&b,&c);
        if(a==0&&b!=0)
                printf("complex no.= %di",b);
        else if(a!=0&&b==0)
                printf("complex no.= %d",a);
        else if(a==0&&b==0)
                printf("complex no.=0");
        else printf("complex no.= %d%+di",a,b);
}

