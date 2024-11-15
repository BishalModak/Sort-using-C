#include <stdio.h>

// Function to perform the bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int i, n;
    printf("How many digits do you need? ");
    scanf("%d", &n);
    int a[n];

    printf("Enter the values: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Call the bubbleSort function to sort the array
    bubbleSort(a, n);

    printf("Sorted values: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

