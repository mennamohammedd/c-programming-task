#include <stdio.h>
int Fibonacci(int n)
{
    int a = 0 , b = 1 , res;
    for (int i = 1 ; i <= n ; i++)
    {
        printf("%d " , a);
        res = a + b ;
        a = b ;
        b = res ;
    }
}
int main()
{
    int n ; 
    printf("Enter the number of terms : ");
    scanf("%d" , &n);
    Fibonacci(n);
}