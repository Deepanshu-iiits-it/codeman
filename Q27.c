//BY: Deepanshu Mittal
// program which reads a number and finds its first even digit [caution: use only one loop]
#include <stdio.h>

void main()
{
  int i,a,d,x;
  
  printf("\n enter any number: ");
  scanf("%d",&a);

  for(i=a;i>0;i/=10)
  {
    d=i%10;
    if(d%2==0)
         x=d;
    
  }
  printf("\n first even digit of the given number is %d\n",x);
  
}
