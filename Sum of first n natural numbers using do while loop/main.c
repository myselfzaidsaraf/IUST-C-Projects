#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=0, sum=0;
    printf("How many natural natural numbers starting from 1 do you want to add : ");
    scanf("%d", &n);

    if (n<0){
        printf("Please enter a natural number\n");
    } else{

    do {
        sum = sum + i;
        i++;
    } while (i<=n);

    printf("The sum of first %d natural numbers is %d" , n, sum);
    }
    return 0;
}
