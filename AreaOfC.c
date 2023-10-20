#include <stdio.h>

int main()
{
    int r;
    float area;
    
    printf("Enter the radious: ");
    scanf("%d", &r);
    
    area = (22.0/7.0) * (r*r);
    printf("Area of circle is %.2f", area);

    return 0;
}