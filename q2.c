// BY: Deepanshu Mittal
// program to read a,b,c and d and finds the distance between points (a,b) and (c,d)
// example: input: 3 7 11 13
// output: 10

#include<stdio.h>
#include<math.h>
void main()
{
        int a,b,c,d;
        float distance;
        printf("\n enter the coordinates of the two points on the cartesian plane:");
        scanf("%d %d %d %d",&a,&b,&c,&d);
        distance= sqrt(pow((c-a),2)+pow((d-b),2));
        printf("\n distance between the two given points = %f",distance);
}

