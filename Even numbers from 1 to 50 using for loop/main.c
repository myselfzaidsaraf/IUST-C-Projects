#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Even numbers from 1 to 50 are\n");
    for (i=2;i<=50;i=i+2){
        printf("%d ", i);
    }
    return 0;
}
