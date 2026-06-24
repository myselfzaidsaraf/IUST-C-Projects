#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping, the numbers are\n");
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}
