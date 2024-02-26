#include <stdio.h>

int main() {
    int arr[5][5];

    printf("Enter elements of the 5x5 array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Row Totals: ");
    for (int i = 0; i < 5; i++) {
        int rowSum = 0;
        for (int j = 0; j < 5; j++) {
            rowSum += arr[i][j];
        }
        printf("%d ", rowSum);
    }
    printf("\n");

    printf("Column Totals: ");
    for (int j = 0; j < 5; j++) {
        int colSum = 0;
        for (int i = 0; i < 5; i++) {
            colSum += arr[i][j];
        }
        printf("%d ", colSum);
    }
    printf("\n");

    return 0;
}