#include <stdio.h>

void neonNumber(int num)
{
    int temp = num * num, digit, sum = 0;
    
    while(temp!=0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp/10;
    }
    if (sum == num)
    {
        printf("The number is a neon number.");
    }
    else
    {
        printf("The number is not a neon number.");
    }
    
}

int main()
{
    int num;
    printf("Enter the value: ");
    scanf("%d", &num);
    
    neonNumber(num);
    
    return 0;
}