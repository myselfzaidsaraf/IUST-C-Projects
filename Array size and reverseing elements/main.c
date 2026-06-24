#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, i, temp;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the %d elements\n", size);
    for (i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    for (i=0;i<size/2;i++){
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    printf("The reversed array is\n");
    for (i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
