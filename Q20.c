//BY: Deepanshu Mittal
//program which reads n numbers and k ,and finds the sum of all numbers after the k even number
#include <stdio.h>

void main()
{
  int i, n, a, totals=0, flag=0;
  printf("\n enter value of n: ");
  scanf("%d", &n);
  	
	printf("\n enter %d numbers: ", n);
 	 for(i=1; i<=n; i++)
  {
    scanf("%d", &a);
    
    if(flag>=k)
    {totals+=a;
    }
    if(a%2==0)
    {flag++;
    }
  }
  printf("\n sum of numbers after k even numbers: %d", totals);
  
}
