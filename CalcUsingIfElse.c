#include <stdio.h>

int main()
{
    char operation;
    float num1, num2, solution;

    printf("Enter 'a' for addition, 's' for subtraction, d for division, m for multiplication: ");
    scanf(" %c", &operation);  // Note the space before %c to consume any leading whitespace

    if (operation == 'a') 
    {
        printf("Enter two numbers for addition: ");
        scanf("%f %f", &num1, &num2);
        solution = num1 + num2;
        printf("Result: %f", solution);
    } 
    
    else if (operation == 's') 
    {
        printf("Enter two numbers for subtraction: ");
        scanf("%f %f", &num1, &num2);
        solution = num1 - num2;
        printf("Result: %f\n", solution);
    } 
    
    
    else if (operation == 'd') 
    {
        printf("Enter two numbers for division: ");
        scanf("%f %f", &num1, &num2);
        solution = num1 / num2;
        printf("Result: %f", solution);
    } 
    
    
    else if (operation == 'm') 
    {
        printf("Enter two numbers for multiplication: ");
        scanf("%f %f", &num1, &num2);
        solution = num1 * num2;
        printf("Result: %f", solution);
    } 
    
    
    else 
    {
        printf("Invalid operation. Please enter 'a' for addition or 's' for subtraction, d for division, m for multiplication.\n");
    }
    
    return 0;
    
}