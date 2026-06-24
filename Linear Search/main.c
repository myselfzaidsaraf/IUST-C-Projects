#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int target;
    int found = 0;

    printf("Enter the target : ");
    scanf("%d", &target);

    for (int i=0;i<size;i++){
        if (arr[i] == target){
            printf("Element '%d' found at index %d", target, i);
            found = 1;
            break;
        }
    }

    if (found == 0){
        printf("Element '%d' not found\n", target);
    }
    return 0;
}
