#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {3,5,7,9,11};
    int size = 5;
    int new_elem = 1;
    int ind = 0;

    printf("The new array is\n");

    for (int i=size;i>ind;i--){
        arr[i] = arr[i-1];
    }
    arr[ind] = new_elem;
    size++;
    for (int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
