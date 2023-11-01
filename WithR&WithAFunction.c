#include <stdio.h>

int sum(int a, int b)
{
    int c;
    
    c = a+b;
    return c;
}


int main()
{
    int a, b, add;
    
    printf("Enter the value of a & b: ");
    scanf("%d %d", &a, &b);
    
    add = sum(a,b);
    printf("The Sum is %d", add);
    
    return 0;
}