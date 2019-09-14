//BY: Deepanshu Mittal
// program which finds sum of all numbers after two consecutive even numbers
#include <stdio.h>

void main()
{
  int i, n, a, totals=0, flag = 0 ;
  printf("\n enter value of n: ");
  scanf("%d",&n);
	
	  printf("\n enter %d numbers: ", n);
	int c=0;
  	for(i=1; i<=n; i++)
  {
    scanf("%d", &number);
    if(flag==1||c==2)
    {totals+=a;
      flag=1;
    }
    if(a%2==0)
    c++;
    else
     c=0;
    
  }
  printf("\n Sum of numbers after two consecutive even numbers is: %d", totals);
  
}
