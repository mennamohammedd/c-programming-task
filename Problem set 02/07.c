#include <stdio.h>

int main() {
    int num , sum=0 ;
    for (int i = 1 ; i <= 10 ; i++){
        printf("Please enter the %d number : " , i );
        scanf("%d" , &num);
        sum += num ;
    }
    float avg = (float)sum / 10 ;
    printf("The summation is %d\nThe average is %f" , sum , avg);
    return 0;
}
