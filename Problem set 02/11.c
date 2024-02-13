#include <stdio.h>

int main() {
    int height;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);
    int numSpaces = height - 1;
    int numStars = 1;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < numSpaces; j++) {
            printf(" ");
        }

        for (int k = 0; k < numStars; k++) {
            printf("*");
        }

        printf("\n");
        numSpaces--;
        numStars += 2;
    }
    return 0;
}


