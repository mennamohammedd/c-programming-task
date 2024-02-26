
#include <stdio.h>

void printUniqueElements(int arr[], int size) {
    printf("Unique Elements in the given array are: \n");
    for (int i = 0; i < size; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j])
                break;
        }
        if (i == j)
            printf("%d ", arr[i]);
    }
}

int main() {
    int size;
    printf("Enter the size of the array: \n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The given array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printUniqueElements(arr, size);
    return 0;
}