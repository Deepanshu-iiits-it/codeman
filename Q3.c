//BY: Deepanshu Mittal
// program which reads n numbers and finds the sum of numbers after deleting last digits
// example: input:33 100 77 42 12
// output: 25

#include <stdio.h>

void main()
{
  int a,i,n,totals=0;
  
  printf("Enter value of n: ");
  scanf("%d", &n);
  
  	printf("Enter %d numbers: ", n);
  	for(i=1;i<=n;i++)
  {
    scanf("%d",&a);
    totals+=(a/10);
  }
  
  		printf("\n sum of the given numbers after deleting last digits is: %d", totals);

  
}
