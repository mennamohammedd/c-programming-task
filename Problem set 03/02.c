#include <stdio.h>
int Swap(int x , int y)
{
    int swap = x ;
    x = y ;
    y = swap ;
    printf("After swapping :\nThe first number is : %d\nThe second number is : %d", x , y);
}
int main()
{
    int x , y ;
    printf("Enter the first number : ");
    scanf("%d" , &x);
    printf("Enter the second number : ");
    scanf("%d" , &y);
    Swap(x,y);
}