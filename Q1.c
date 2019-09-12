//BY: Deepanshu Mittal
// program which reads n numbers and finds the sum of last digits
// example: input:33 100 77 42 12
// output: 14

#include <stdio.h>

void main()
{
  int a,i,n;
  printf("\n enter value of n: ");
  scanf("%d",&n);

	  printf("\n enter %d numbers: ", n);

	  int totals=0;
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a);
    totals+=(a%10);
  }
  printf("\n sum of the last digits of the given numbers is: %d", totals);

  
}
