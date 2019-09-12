//BY: Deepanshu Mittal
// program which reads n numbers and finds the sum of numbers after putting last two digits in sorted order


#include <stdio.h>

void main()
{
  int a,i,n,totals=0;

  printf("\n enter n: ");
  scanf("%d",&n);

         printf("\n enter %d numbers: ", n);
          for(i=1;i<=n;i++)
  {
    scanf("%d", &a);
    int slast = a % 100 / 10;
    int last = a % 10;
    if(slast<=last)
    totals+=((a/100)*100)+slast+last*10;
    else totals+=((a/100)*100)+last+slast*10;
  }
  printf("Sum of numbers after sorting the last two digits: %d\n", totals);

  
}
