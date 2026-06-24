#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1,3,5,7,9};
    int size = 5;
    int new_elem = 11;

    printf("The new array is\n");

    arr[size] = new_elem;
    size++;

    for (int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
