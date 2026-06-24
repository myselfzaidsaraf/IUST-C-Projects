#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=2;
    printf("Even numbers from 1 to 50 are\n");\
    do {
        printf("%d ", i);
        i=i+2;
    } while (i<=50);
    return 0;
}
