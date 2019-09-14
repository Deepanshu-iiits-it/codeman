// BY: Deepanshu Mittal
// program to read two integers and print the picture (29)

#include<stdio.h>

void main()
{
        int a,b,i,j,k,coa1=0,coa2=1,cob,reqser[10];
        printf("\n enter a and b \n");
	scanf("%d %d",&a,&b);
	
        	for(j=1;j<=5;j++)
		{ cob=coa1+coa2;
		   reqser[j]=((coa2*a)+(cob*b));
		   coa1=coa2;
                   coa2=cob;
                }

		for(i=1;i<=6;i++)
		{ printf("(%d)(%d)",a,b);
			for(j=1;j<i;j++)
				printf("(%d)",reqser[j]);

                  printf("\n");
                }
	
}

