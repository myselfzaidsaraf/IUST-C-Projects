#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {3,7,2,1,8};
    int size = 5;
    int temp;
    for (int i=0;i<size-1;i++){
        for (int j=0;j<size-1;j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("The sorted array is\n");
    for (int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
