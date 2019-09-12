//BY: Deepanshu Mittal
// program which reads n numbers and finds the sum of odd numbers 
// example: input:33 100 77 42 12
// output: 110

#include <stdio.h>

void main()
{
  int a,i,n,totals=0;

  printf("\n enter n: ");
  scanf("%d", &n);
  
  	printf("\n enter %d numbers: ", n);
	  for(i=1;i<=n;i++)
  {
    scanf("%d",&a);
    if (number%2!=0)
          totals+=a;
    
  }
  		
	  printf("\n sum of odd numbers: %d", totals);

  
}
