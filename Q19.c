//BY: Deepanshu Mittal
// program which reads n and n pair of numbers. The program finds product of every pair. Then their sum is calculated
// example: input: if n=4 and pairs are (3,2) (6,3) (2,6) (4,3)
// output: 48

#include <stdio.h>

void main()
{
  int i, n, a, b, product=1;

  printf("\n nter n: ");
  scanf("%d",&n);

  for(i=1; i<=n; i++)
  {
    scanf("%f %f",&a,&b);
    	product=a*b;
    		int totals+=product;
  }

  	
 		 printf("Sum: %d\n", totals);
  
}
