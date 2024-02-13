#include <stdio.h>
int main()
{
     int x ;
     printf("Please enter the working hours : ");
     scanf("%d" , &x);
     int salary = 40*x;
     float salary2 = salary-0.1*salary;
     if(x<40)
     {
        printf("The salary is : %0.2f" , salary2 );
     }
     else{
        printf("The salary is : %d" , salary);
     }
     return 0;  
}