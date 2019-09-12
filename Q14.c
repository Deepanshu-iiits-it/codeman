//BY: Deepanshu Mittal
// program which reads n, and corresponding n numbers. The program finds their sum. there is a comma (,) after n and between all no.s
//example: input: 5,2,3,1,7,9,
//output: 2+3+1+7+9=22

#include <stdio.h>

void main()
{
  int i, n, a, s=0;
  printf("\n enter n ");
  scanf("%d,",&n);
  printf("\n enter %d numbers",n);
  for(i=1;i<=n;i++)
 	 {
		    scanf("%d,",&a);
    			s+=a;
 	 }
  	printf("\n sum: %d",s);
  
}
