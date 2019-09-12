// BY: Deepanshu Mittal
// program to read three numbers a, b, c and prints the middle (in terms of value) of these
// example: input: 1 80 45
//      output: 45

#include<stdio.h>
#include<math.h>
void main()
{
        int a,b,c;

        printf("\n enter the three numbers:");
        scanf("%d %d %d",&a,&b,&c);

        if((a<b && b<c)||(c<b)&&(b<a))
          printf("\n the middle of these is %d",b);

        if((b<a && a<c)||(c<a && a<b))
                printf("\n the middle of these is %d ",a);
        if((a<c && c<b)||(b<c && c<a))
                    printf("\n the middle of these is %d ",c);
                


}

