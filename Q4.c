//BY: Deepanshu Mittal
// program which reads n numbers and finds the sum of numbers after deletion of second last digits
// example: input:33 100 77 42 12
// output: 24

#include <stdio.h>

void main()
{
  int a,i,n,totals=0;

  printf("\n enter value of n: ");
  scanf("%d", &n);

	  printf("\n enter %d numbers: ", n);
  	for(i=1;i<=n;i++)
  {
    scanf("%d",&a);
    totals+=((a/100)*10)+(a%10);
  }
  printf("\n sum of the given numbers after deleting second last digits is: %d", totals);

  
}
