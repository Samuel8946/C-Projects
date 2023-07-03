#include <stdio.h>

float calc_circ(float userInput);
int main(void)
{
    // Introduction to program
    printf("Welcome to my second project where it calculates the circumference of a circle! =)\n");
    printf("Please report and bugs later on I will try my best to fix them.\n\n");

    // Prompt user for the radius
    float radius;
    printf("Please enter the radius value: ");
    scanf("%f", &radius);
    printf("\n");
    

    // Calculate circumference of the circle
    calc_circ(radius);
}

float calc_circ(float userInput)
{
    float pi = 3.14;
    
    float circumference = 2 * pi * userInput;

    return printf("The Circumference of the cirlce is: %f\n", circumference);
}