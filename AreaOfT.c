#include <stdio.h>
int main()
{
    int base, height;
    float area;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter height: ");
    scanf("%d", &height);
    
    area = (1.0/2.0)*base*height;
    
    printf("Area of Traiangle is %.2f",area);

    return 0;
}