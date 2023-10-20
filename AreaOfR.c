#include <stdio.h>
int main()
{
    int length, breadth, area;
    printf("Enter length: ");
    scanf("%d", &length);
    printf("Enter breadth: ");
    scanf("%d", &breadth);
    
    area = length * breadth;
    
    printf("Area of Rectangle is %d",area);

    return 0;
}