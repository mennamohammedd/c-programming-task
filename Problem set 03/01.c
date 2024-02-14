#include <stdio.h>
int Get_Max (int x , int y)
{
    if(x>y)
    return x;
    else return y;
}
int main()
{ 
    int x , y;
    printf("Enter two numbers :\n");
    scanf("%d %d" ,&x , &y);
    printf("The maximum number is : %d" , Get_Max(x , y));
    return 0;
}        
