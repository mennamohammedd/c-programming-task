#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int firstLargest, secondLargest;
    
    if (arr[0] > arr[1]) {
        firstLargest = arr[0];
        secondLargest = arr[1];
    } else {
        firstLargest = arr[1];
        secondLargest = arr[0];
    }
    
    for (i = 2; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }
    
    printf("The second largest element in the array is: %d", secondLargest);
    
    return 0;
}
