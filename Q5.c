//BY: Deepanshu Mittal
// program which reads n numbers and finds the sum of the product of last digits
// example: input:33 100 77 42 12
// output: 

#include <stdio.h>

void main()
{
  int a,i,n,totals=0;

  printf("\n enter n: ");
  scanf("%d",&n);
 
	  printf("Enter %d numbers: ", n);
	  for(i=1;i<=n;i++)
  {
    scanf("%d",&a);
    totals+= ((a%100)/10)*(a%10);
    
  }
  printf("\n sum of product of last digits of the given numbers: %d", totals);

  
}
