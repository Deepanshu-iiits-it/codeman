//BY: Deepanshu Mittal
//program which reads n numbers and finds the sum of all numbers after the first even number
#include <stdio.h>

void main()
{
  int i, n, a, totals=0, flag=0;
  printf("\n enter value of n: ");
  scanf("%d", &n);
  	
	printf("Enter %d numbers: ", n);
 	 for(i=1; i<=n; i++)
  {
    scanf("%d", &a);
    
    if(flag>0)
    {totals+=a;
    }
    if(a%2==0)
    {flag++;
    }
  }
  printf("\n sum of numbers after 1st even number: %d", totals);
  
}
