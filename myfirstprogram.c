#include <stdio.h>
#include <unistd.h>

int main(void) {
    printf("Welcome to my little program!\n");
    printf("Press Any Key to Start\n");
    getchar();

    const char* months[] = {"January", "February", "March", "April", 
    "May", "June","July", "August", "September", "October", "November", "December\n"};

    int userInput;

    for (int i = 0; i < 12; i++)
    {
        printf("%s\n", months[i]);
    } 

    do
    {
        printf("Please type a number from 1-12: ");
        scanf("%d", &userInput);
    } 
    while (userInput < 1 || userInput > 12);

    printf("Your number is: %d\n", userInput);
    printf("The month you have selected is: %s\n", months[userInput - 1]);
    printf("\n");

    system("pause");  
}