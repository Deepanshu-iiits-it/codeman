//BY: Deepanshu Mittal
// program which reads n and 2n numbers, if n=4 and numbers are 3,2,6,3,2,6,4,3 then output is 3^2+6^3+2^6+4^3=353

#include <stdio.h>
#include <math.h>

void main()
{
  int n, t2, t2, totals=0;
  
  printf("\n enter n: ");
  scanf("%d", &n);
  
  for(int i=1;i<=n;i++)
  {
    scanf("%d,%d,", &t1,&t2);
    totals+=pow(t1,t2);
  }
  printf("\n output will be: %d", totals);
  
}
