#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum=0;
    printf("How many natural natural numbers starting from 1 do you want to add : ");
    scanf("%d", &n);

    if (n<0){
        printf("Please enter a natural number\n");
    } else{
    for (int i=1;i<=n;i++){
        sum = sum + i;
    }
    printf("The sum of first %d natural numbers is %d", n, sum);
    }
    return 0;
}
