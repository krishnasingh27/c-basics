#include <stdio.h>

int main()
{
    int number, sq;
    
    printf("Enter the number: ");
    scanf("%d", &number);
    
    sq = (number*number);
    printf("Square of %d is %d", number,sq);

    return 0;
}