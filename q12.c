// BY: Deepanshu Mittal
// program to read a complex number and prints it in a nice form 

#include<stdio.h>

void main()
{
        int a,b,c;

        printf("\n enter the complex number:");
        scanf("%d%di",&a,&b);
	if(a==0&&(b!=0||b!=1))
		printf("complex no.= %di",b);
	else if(a==0&&b==1)
		printf("complex no.= i");
	else if(a!=0&&b==0)
		printf("complex no.= %d",a);
	else if(a==0&&b==0)
		printf("complex no.=0");
	
	else if(a!=0&&b==1)
		printf("complex no.= %d+i",a);	
	
	
	else printf("complex no.= %d%+di",a,b);
}

