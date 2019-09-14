// BY: Deepanshu Mittal
// program to read a vector and prints it in a nice form

#include<stdio.h>

void main()
{
        int i,j,c=0;
	char vector[20];
	printf("\n enter the vector:");
        scanf("%9s",&vector);
	for(i=0;'\a'!=0;i++)
	c++;
	        
	for(i=0;'\a'!=0;i++)
	{if(vector[i]=='0')
	for(j=i;j<c;j++)
		{vector[j-1]=vector[j+2];
		vector[j]=vector[j+3];
		vector[j+1]=vector[j+4];
		c=c-3;}

	if(vector[i]=='1')
	for(j=i;j<c;j++)
		{vector[j]=vector[j+1];
		c=c-1;}
	}
	printf("\n the new vector is: ");
	for(i=0;i<c;i++)
	printf("%c",vector[i]);
}

