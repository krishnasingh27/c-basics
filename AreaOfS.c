#include <stdio.h>

int main()
{
    int side, area;
    
    printf("Enter the side: ");
    scanf("%d", &side);
    
    area = (side*side);
    printf("Area of square is %d", area);

    return 0;
}