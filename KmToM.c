#include <stdio.h>

int main()
{
    int km, m;
    
    
    printf("Enter km's: ");
    scanf("%d", &km);
    
    m = km * 1000;
    printf("%d km = %d m", km, m);

    return 0;
}