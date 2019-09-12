//BY: Deepanshu Mittal
// program which reads n numbers and finds the weighted sum of these numbers, weight of i th no. is i
// example: input:33 100 77 42 12
// output: 692

#include <stdio.h>

void main()
{
  int a,i,n,totals=0;

  printf("\n enter n: ");
  scanf("%d",&n);

	  printf("\n enter %d numbers: ", n);
	  for(i=1;i<=n;i++)
  {
    scanf("%d",&a);
    totals+=(a*i);
  }

 		 printf(" \n the resultant sum of the given numbers: %d", totals);

  
}
