#include <stdio.h>

void removeAtIndex(int arr[], int *size, int index) {
    if (index < 0 || index >= *size) {
        printf("Index out of bounds\n");
        return;
    }
    
    // Shift elements to the left
    for (int i = index; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Decrease the size of the array
    (*size)--;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 3;

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    removeAtIndex(arr, &size, index);

    printf("Array after removing element at index %d: ", index);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
