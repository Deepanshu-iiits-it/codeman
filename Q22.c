//BY: Deepanshu Mittal
// program which reads n numbers and finds the sum of 1st, 2nd, 4th, 7th, 11th...... numbers

#include <stdio.h>

void main()
{
  int i, n, a, totals=0,t;
  printf("\n enter value of n: ");
  scanf("%d",&n);
  
	printf("\n enter %d numbers: ", n);
	for(t=1;t<=n;t++)  	
{
    scanf("%d\n",&a);
   
    for(i=1;i<=t;i=1+(i*(i-1)/2))
    if(t==i)
    totals+=a;
}
  printf("\n sum of 1st, 2nd, 4th, 7th ... numbers: %d", totals);
  
}
