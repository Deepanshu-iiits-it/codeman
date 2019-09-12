//BY: Deepanshu Mittal
// program which finds the average weighted sum of even numbers, the weight of i th no. is i

#include <stdio.h>

void main()
{
  int a,i,n,totals=0,c=0;
  
  printf("\n Enter n: ");
  scanf("%d",&n);
  
	  printf("\n Enter %d numbers: ", n);
  	for(i=1;i<=n;i++)
  {
    scanf("%d",&a);
    if(a%2==0)
    {
      totals+=a*i;
      c+=i;
    }
  }
  
 		
 		 printf("\n Weighted average of even numbers: %d", (totals/c));

  
}
