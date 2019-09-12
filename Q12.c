//BY: Deepanshu Mittal
// program which reads n numbers and finds the sum of lll those numbers lying between 30 and 90
// example: input:33 100 77 42 12
// output:152 

#include <stdio.h>

void main()
{
  int a,i,n,totals=0;
  
  printf("\n enter n: ");
  scanf("%d",&n);
  
 	 printf("\n enter %d numbers: ", n);
	  for(i=1;i<=n;i++)
  {
    scanf("%d",&a);
    if (a>=30 && a<=90)
         totals+=a;
    
  }
  
	  	printf("\n sum of numbers b/w 30 and 90: %d", totals);
  
}
