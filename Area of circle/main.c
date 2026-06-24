#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double rad, area;
    printf("Enter the value of radius : ");
    scanf("%lf", &rad);

    area = M_PI*rad*rad;

    printf("The area of the circle is %f sq units", area);
    return 0;
}
