#include <stdio.h>
int login(int username, int password) {
    int correctUsername = 123;
    int correctPassword = 123;

    if (username == correctUsername && password == correctPassword ) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int username ;
    int password;

    printf("Enter username: ");
    scanf("%d", &username);
    printf("Enter password: ");
    scanf("%d", &password);

    if (login(username, password)) {
        printf("Login successful! Welcome, %d!", username);
    } else {
        printf("Login failed. Incorrect username or password.");
    }

    return 0;
}
