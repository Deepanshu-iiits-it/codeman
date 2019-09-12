//BY: Deepanshu Mittal
// Read a float number and print it by adding 17. Do not use %f
// example: input: 4788.32
// output:4805.32

#include <stdio.h>
#include <math.h>

void main()
{
  int a, b;
  printf("\n enter any float number: ");
  scanf("%d.%d",&a,&b);
  printf("\n output will be: %d.%d",(a+17),b);
  
}
