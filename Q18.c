//BY: Deepanshu Mittal
// program which reads n and a vector in n dimensional space. The program outputs the magnitude
// example: input: n=5 and vector is(3,1,8,5,1)
// output: 10
#include <stdio.h>
#include <math.h>

void main()
{
  int i, n;
  float a;
  printf("\n enter n:");
  scanf("%d",&n);
  printf("\n enter the vector");
  
  for(i=1; i<=n; i++)
  {
  	  scanf("%f",&a);
   	 float m+=pow(a,2);
  }
 
 	 float mag = sqrt(m);
  printf("magnitude of the given vector: %.2f",mag);
  
}
