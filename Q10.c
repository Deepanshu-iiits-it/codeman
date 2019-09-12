//BY: Deepanshu Mittal
// program which reads n numbers and finds how many of these are odds
// example: input:33 100 77 42 12
// output: 2

#include <stdio.h>

void main()
{
  int a,i,n,c=0;

  printf("\n enter n: ");
  scanf("%d",&n);

	  printf("\n enter %d numbers: ", n);
	  for(i=1;i<=n;i++)
  {
    scanf("%d",&a);
    if (number%2!=0)
         c++;
    
  }
  printf("\n number of odd numbers: %d", c);
 
}
