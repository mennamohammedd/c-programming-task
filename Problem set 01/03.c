#include <stdio.h>
int main ()
{
    float x;
    printf("Please enter an amount : ");
    scanf("%f",&x);
    float y = x + 0.05*x ;
    printf("The total amount with tax added is : %0.2f ",y);
    return 0;
}