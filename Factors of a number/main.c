#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number : ");
    if (scanf("%d", &num)!=1 || num<=0){
        printf("Please enter a positive number");
        return 1;
    }
    printf("The factos of the given number are ");

    for (int i=1;i<=num;i++){
        if (num % i == 0){
            printf("%d ", i);
        }
    }
    return 0;
}
