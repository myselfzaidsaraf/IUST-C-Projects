#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, fact, i;
    fact = 1;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num<0){
        printf("Factorial of a anegative number does not exist\n");
    } else {
        for (i=1;i<=num;i++) {
            fact = fact * i;
        }
        printf("Factorial = %d", fact);
    }
    return 0;
}
