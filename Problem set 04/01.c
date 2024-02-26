#include <stdio.h>

void sortArray(int arr[], int n, int order) {
    int temp, i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if ((order == 0 && arr[j] > arr[j+1]) || (order == 1 && arr[j] < arr[j+1])) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, order;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter 0 for ascending or Enter 1 for descending: ");
    scanf("%d", &order);
    
    sortArray(arr, n, order);
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

