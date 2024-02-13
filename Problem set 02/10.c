#include <stdio.h>

int main() {
    int ID1 , pass1 , ID = 1234 , pass = 5678 ;
    printf("Please enter your ID : ");
    scanf("%d" , &ID1);
    if ( ID1 == ID){
        int i = 1;
        do {
            printf("Please enter your Password : ");
            scanf("%d" , &pass1);
            if (pass1 == pass){
                printf("Welcome!");
                break;
            }
            if(pass1 != pass){
              printf("You are not registered\n");
            }
            i++;
        }while(i<=3);
        if(pass1 != pass){
            printf("No more tries");
        }
    } else {
    printf("You are not registered");
    }
    return 0;
}
