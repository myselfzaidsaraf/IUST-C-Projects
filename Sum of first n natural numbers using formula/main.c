#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum;
    printf("How many natural natural numbers starting from 1 do you want to add : ");
    scanf("%d", &n);

    sum = n*(n+1)/2;

    if (n<0){
        printf("Please enter a natural number\n");
    } else{

    printf("The sum of first %d natural numbers is %d" , n, sum);
    }
    return 0;
}
