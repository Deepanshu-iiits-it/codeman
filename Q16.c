//BY: Deepanshu Mittal
// Modify Q16 program when (;) is used after n
// example: input: 5;2,3,1,7,9
// output: 22

#include <stdio.h>

void main()
{
  int i, n, a, s=0;
  printf("\n enter n");
  scanf("%d;", &n);
  printf("\n enter the %d numbers",n);

  for(i=1; i<=n; i++)
 {if(i<n)
      scanf("%d,", &a);
      else
	      scanf("%d",&a);
       s+=a;
  }
  
  printf("Sum: %d\n", s);
  
}
