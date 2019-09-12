// BY: Deepanshu Mittal
// program to print the picture 7

#include<stdio.h>

void main()
{
        int i=1,j=1;
        for(i=1;i<=11;i++)
        {       for(j=1;j<=17;j++)
                if((i==2||i==10)&&(j>6&&j<12))
			printf("*");
                else if(i==6&&j>2&&j<16)
			printf("*");
		else if((i>=3&&i<=5)&&((i+j>=8&&j<=9)||(j>9&&i+10>=j)))
			printf("*");
		else if((i>=7&&i<=9)&&((j>=(i-4)&&j<=9)||(j>9&&i+j<=22))) 
			printf("*");
                  else printf("0");

                printf("\n");
        }
}

