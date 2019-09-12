//BY: Deepanshu Mittal
// program which reads n and m such that program reads n group of numbers having m numbers each. the program finds sum of all numbers
// example: input: n=2 m=3 (3,2,1) (6,3,2)
// output: 17

#include <stdio.h>

void main()
{
  int i, j, n, m, a;
  
  printf("\n enter n:");
  scanf("%d",&n);
  
  printf("\n enter m: ");
  scanf("%d",&m);

  
  for(i=0; i<n; i++)
  {	
	  printf("\n enter %d numbers",m);
	  for(j=0; j<m; j++)
    {
      scanf("%d ", &a);
     int totals+=a;
    }
  }
  printf("Sum: %d\n", totals);
  
}
