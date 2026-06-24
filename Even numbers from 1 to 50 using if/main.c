#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Even numbers from 1 to 50 are\n");
    for (i=1;i<=50;i++){
        if (i%2==0){
            printf("%d ", i);
        }
    }
    return 0;
}
