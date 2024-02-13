#include <stdio.h>

int main() {
    int n[3];
    
    printf("Enter the 3 numbers: \n");
    for (int i = 0 ; i <= 2 ; i++){
        printf("Number %d : " , i+1);
        scanf("%d", & n[i]);
    }

    printf("Numbers in reversed order : ");
    for (int i = 2 ; i >= 0 ; i--){
        printf("%d ", n[i]);
    }

    return 0;
}

