#include <stdio.h>

int main()
{
    int number, cube;
    
    
    printf("Enter the number: ");
    scanf("%d", &number);
    
    cube = (number*number*number);
    printf("Cube of %d is %d", number,cube);

    return 0;
}