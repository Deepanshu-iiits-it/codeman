//BY: Deepanshu Mittal
// program which reads n and n complex numbers and outputs their sum

#include <stdio.h>

void main()
{
  int i,n,a,b;
  
  printf("\n enter n: ");
  scanf("%d",&n);
  
  int reals=0,comps=0;
  
  for(i=1;i<=n;i++)
  {
    scanf("%f%fi",&a,&b);
     reals+=a;
     comps+=b;
  }
  printf("\n Sum of the given complex numbers is: %+.2f%+.2fi",reals,comps);
  
}
