#include <stdio.h>

int main()
{
    int c;
    float f;
    
    printf("Enter the celcious: ");
    scanf("%d", &c);
    
    f = (9.0/5.0)*c + 32;
    printf("The temperature is : %.2f Fahrenheit", f);

    return 0;
}