#include <stdio.h>

int main() {
    int n , fact=1 ,i = 1 ;
    printf("Please enter the number : ");
    scanf("%d" , &n);
    while(i <= n){
        fact *= i ;
        i++;
    }
    printf("The factorial is : %d" , fact);
    return 0;
}
