#include <stdio.h>

void sum()
{
    int a,b,c;
    printf("Enter the value of a & b: ");
    scanf("%d %d", &a, &b);
    c = a+b;
    printf("The sum is %d", c);
}


int main()
{
    sum();
    
    return 0;
}