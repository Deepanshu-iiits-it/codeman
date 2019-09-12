//BY: Deepanshu Mittal
// program which reads n numbers and finds the last even number
// example: input:33 100 77 42 12
// output: 12

#include <stdio.h>

void main()
{
  int a,i,n,x;
  
  printf("\n enter n: ");
  scanf("%d",&n);

	  printf("\n enter %d numbers: ", n);
	  for(i=1;i<=n;i++)
  {
    scanf("%d",&a);
    if (a%2==0)
    x=a;
    
  }

  		printf("\nthe last even number among the given numbers is: %d",x);

  
}
