#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Enter the numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    if ((a>b) && (a>c) && (a>d) && (a>e)) 
    {
        printf("%d is greater", a);
    } 
    
    if ((b>a) && (b>c) && (b>d) && (b>e)) 
    {
        printf("%d is greater", b);
    } 
    
    if ((c>a) && (c>b) && (c>d) && (c>e)) 
    {
        printf("%d is greater", c);
    } 
    
    if ((d>a) && (d>b) && (d>c) && (d>e)) 
    {
        printf("%d is greater", c);
    } 
    else 
    {
        printf("%d is greater", e);
    }
    
    return 0;
    
}