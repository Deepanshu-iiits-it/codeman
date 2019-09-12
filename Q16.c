//BY Deepanshu Mittal
// program which finds the weighted sum of even numbers, weight of  i th even no. is i

#include <stdio.h>

void main()
{
  int i,n,a,totals=0;

  printf("\n Enter n: ");
  scanf("%d",&n);

	  printf("\n Enter %d numbers: ", n);
  	for(i=1;i<=n;i++)
  {
    scanf("%d",&a);
    if (a%2==0)
          totals+=a*i;
    
  }
  
		printf("\n Weighted sum of even numbers: %d", totals);

 
}
