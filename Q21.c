//BY: Deepanshu Mittal
// Modify Q20 program so that product of every group is calculated. Then their sum is done
// example: input: n=2 m=3 (3,2,1) (6,3,2)
// output: 42
#include <stdio.h>

void main()
{
  int i, j, n, m, a, product;

  printf("\n enter n: ");
  scanf("%d",&n);

  printf("\n enter m: ");
  scanf("%d",&m);

	int totals=0;
  for(i=1; i<=n; i++)
  {
    product = 1;
    
    printf("\n enter %d numbers",m);
    for(j=1; j<=m; j++)
    {
      scanf("%d",&a);
      product*=a;
    }
    totals+=product;                     
  }
  printf("\n sum: %d", totals);
  
}
