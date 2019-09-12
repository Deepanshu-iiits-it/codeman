//BY: Deepanshu Mittal
// Modify Q14 program so that last (,) is not needed
#include <stdio.h>

void main()
{
  int i, n, a, s=0;
  printf("\n enter n");
  scanf("%d,",&n);
  
  printf("\n enter %d numbers",n);
  
  for(i=1;i<=n;i++)
  {   if(i<n)
      scanf("%d,",&a);
      else
	      scanf("%d",&a);
        s+=a;
  }

  
      	printf("\n sum: %d",s);
  
}
