#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value: ");
    scanf("%d", &n);
    
    for(int i= 1; i<=n; i++)
    {
        for(int k = i; k<n; k++)
        {
            printf(" ");
        }
        for (int j = 1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}