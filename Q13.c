//BY: Deepanshu Mittal
// program which reads n numbers and finds the average of all the odd no.s
// example: input:33 100 77 42 12
// output:55

#include <stdio.h>

void main()
{
  int a,i,n,totals=0,c=0;

  printf("\n enter n: ");
  scanf("%d",&n);

         printf("\n enter %d numbers: ", n);
          for(i=1;i<=n;i++)
  {
    scanf("%d",&a);
    if (a%2!=0)
    { c++;   
         totals+=a;
    }
  }

                printf("\n average of odd numbers : %d", (totals/c));

}

