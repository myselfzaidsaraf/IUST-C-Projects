#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num,i,isPrime =1 ;

    printf("Enter a number : ");
    scanf("%d", &num);

    if (num<=1){
        isPrime = 0;
    } else{
        for (i=2;i<=sqrt(num);i++){
            if (num % i == 0){
                isPrime = 0;
            break;
            }
        }
    }

    if (isPrime ==1){
        printf("The given number is a prime number\n");
    } else{
        printf("The given number is not a prime number");
    }
    return 0;
}
