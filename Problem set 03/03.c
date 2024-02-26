#include <stdio.h>
int m(int n)
{
    int count = 0 ,q=n;
    while(q != 0)
    {
        q = q/10 ;
        count ++;
    }
    return count ;
}
int main()
{
    int n ;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Number of digits is : %d" , m(n));
    return 0 ;
}