//BY: Deepanshu Mittal
// program which reads two numbers (k and x). The program finds the kth digit of x [coation: use only one loop]

#include <stdio.h>

void main()
{
  int i,x,k,a;

     printf("\n enter k: ");
  scanf("%d", &k);
  
     printf("\n enter any number: ");
     

  for(i=1;i<=(k-1);i++)
	scanf("%1d",&a);

	scanf("%1d",&x);

  printf("\n %dth digit of the given number is %d",k,x);
  
}
