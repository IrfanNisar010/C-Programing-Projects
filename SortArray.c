#include <stdio.h>

int main()
{
    int n, i, j, temp;

    printf("Enter the size of Array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter values of Array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if(arr[j] < arr[j + 1]) {
                temp   = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        }
        printf("Sorted Array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
    }

    return 0;
}