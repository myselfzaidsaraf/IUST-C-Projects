#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, fact;
    fact = 1;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num<0){
        printf("Factorial of a anegative number does not exist\n");
    } else {
        if (num>0){
    do {
        fact = fact * num;
        num = num - 1;
    } while (num>0);
    }
    printf("Factorial = %d", fact);
    }
    return 0;
}
