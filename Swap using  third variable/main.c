#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("After swapping, the numbers are\n");
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}
