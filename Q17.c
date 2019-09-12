//BY: Deepanshu Mittal
// Modify Q16 program when n semicolon (;) are used after n.
// input: 5;;;;;2,3,1,7,9
// output: 22
#include <stdio.h>

void main()
{
  int i, n, a, s=0;
  oprintf("\n enter n");
  scanf("%d", &n);
  for(int j=1; j<=n; j++)
  {
    scanf("%c",';');
  }
  for(i=1; i<=n; i++)
  {
    if(i<n)
        scanf("%d,", &a);
    
    else
      scanf("%d", &a);
    
    s+=a;
  }
  printf("\n sum: %d", s);
  
}
