#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int n, int data) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (data == arr[mid]) {
            return mid; // Return the index where data is found
        } else if (data < arr[mid]) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return -1; // Return -1 if data is not found
}

int main() {
    int i, n, data;
    printf("How many digits do you need? ");
    scanf("%d", &n);
    int a[n];

    printf("Enter the values:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Which number do you want to search for: ");
    scanf("%d", &data);

    int index = binarySearch(a, n, data);

    if (index != -1) {
        printf("The data found in index no: %d\n", index);
    } else {
        printf("Data not found\n");
    }

    return 0;
}

