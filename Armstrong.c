#include <stdio.h>

int countDigit(int num, int count)
{
    
    while(num>0)
    {
        num = num/10;
        count++;
    }
    return count;
}

void isArmstrong(int num, int count)
{
    int last, sum = 0, temp = num;
    while (temp != 0)
    {
        int mul = 1;
        last = temp % 10;
        for (int i = 0; i<count; i++)
        {
            mul = last * mul;
        }
        sum = sum + mul;
        temp = temp/10;
    }
    if (sum == num)
    {
        printf("The Number is Armstrong.");
    }
    else 
    {
        printf("The number is not Armstrong.");
    }
}

int main()
{
    int num, count = 0;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    isArmstrong(num,count);
    

    return 0;
}
