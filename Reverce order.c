/*Sadika Islam Tisha
Id:221-35-872*/
#include <stdio.h>
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    int length = sizeof(arr)/sizeof(arr[0]);

    printf("Original array: \n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("Array in reverse order: \n");
    for (int i = length-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}
