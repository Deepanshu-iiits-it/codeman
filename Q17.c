//BY: Deepanshu Mittal
// program which finds the sum of the product of two consecutive numbers

#include <stdio.h>

void main()
{
  int i,n,t1,t2,totals=0;

  printf("Enter n: ");
  scanf("%d", &n);

	  printf("Enter %d numbers: ", n);
  	for(i=1;i<=n/2;i++)
  {
    scanf("%d %d",&t1,&t2);
         totals+=t1*t2;    
   
  }
	
	  printf("Sum of consecutive product of number: %d\n", totals);
  

}
