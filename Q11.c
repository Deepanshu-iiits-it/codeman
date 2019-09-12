//BY: Deepanshu Mittal
// program which reads n numbers and finds the sum of all those no. whose last digit is multiple of three
// example: input:33 100 77 42 12
// output: 14

#include <stdio.h>

void main()
{
  int a,i,n,totals=0;

  printf("\n enter value of n: ");
  scanf("%d",&n);

	  printf("\n enter %d numbers: ", n);
	  for(i=1;i<=n;i++)
  {
    scanf("%d",&a);
    if ((a%10)%3==0)
       totals+=a;
    
  }
  		printf("\n sum of numbers whose last digit is multiple of 3: %d", totals);
}
