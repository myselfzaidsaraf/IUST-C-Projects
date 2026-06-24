#include <stdio.h>
#include <stdlib.h>

void factorial(int n){
    int fact = 1;
    int i;
    for (i=1;i<=n;i++) {
        fact = fact * i;
}
printf("Factorial of %d is %d", n,fact);
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    factorial(num);
    return 0;
}
