#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    
    if (number < 0)
    {
        printf("The number is Negative");
    }
    
    else if (number == 0)
    {
        printf("The Number is 0");
    }
    
    else
    {
        printf("The number is positive");
    }
    
    return 0;
    
}