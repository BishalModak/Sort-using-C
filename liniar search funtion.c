#include <stdio.h>

// Function to search for a value in an array
int searchValue(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (value == arr[i]) {
            return i; // Return the index where the value is found
        }
    }
    return -1; // Return -1 if the value is not found
}

int main() {
    int size, value;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int num[size];

    printf("Enter %d values for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &num[i]);
    }

    printf("Enter the value you want to search: ");
    scanf("%d", &value);

    int pos = searchValue(num, size, value);

    if (pos == -1) {
        printf("Item not found\n");
    } else {
        printf("The value is found at index %d\n", pos);
    }

    return 0;
}

