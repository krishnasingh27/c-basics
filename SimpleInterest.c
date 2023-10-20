#include <stdio.h>

int main()
{
    int p,r,t;
    float SI;
    
    printf("Enter the Principle Amount: ");
    scanf("%d", &p);
    
    printf("Enter the Rate: ");
    scanf("%d", &r);
    
    printf("Enter the Time: ");
    scanf("%d", &t);
    
    SI = (p*r*t)/100;
    printf("The amount after Simple Intrest is: %.2f", SI);

    return 0;
}