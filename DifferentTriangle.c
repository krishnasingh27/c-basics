#include <stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Enter the side 1 of triangle: ");
    scanf("%d", &side1);
    
    printf("Enter the side 2 of triangle: ");
    scanf("%d", &side2);
    
    printf("Enter the side 3 of triangle: ");
    scanf("%d", &side3);
    
    if (side1 == side2 && side1 == side3)
    {
        printf("It is an equiletral triangle.");
    }
    
    else if ((side1 == side2 && side1 != side3) || (side1 == side3 && side1 != side2) || (side2 == side3 && side1 != side2))
    {
        printf("It is an isosceles triangle.");
    }
    
    else
    {
        printf("It is an scalane triangle.");
    }
    
    return 0;
    
}