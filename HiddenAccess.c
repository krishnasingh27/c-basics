#include <stdio.h>

int main()
{
    char chara, charb;
    printf("Enter 'a' to to get access: ");
    scanf("%c", &chara);
    scanf("%c", &charb);
    
    if (chara == 'a')
    {
        if (charb=='b')
        {
            printf("You are inside a and accessed b");
        }
        else 
        {
            printf("You are inside a but do not have access to b");
        }
    }

    return 0;
}