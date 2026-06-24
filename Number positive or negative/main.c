#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num;
    printf("Enter a number : ");
    scanf("%lf", &num);

    if (num>0)
    printf("The number is positive");
    else if (num<0)
    printf("The number is negative");
    else
    printf("The number is neither positive nor negative");
    return 0;
}
