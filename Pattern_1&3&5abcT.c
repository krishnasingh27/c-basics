#include <stdio.h>

int main()
{
    char ch = 'a';
    for (int i = 0; i <=2; i++)
    {
        ch = 'a';
        for (int j = 0; j<=4; j++)
        {
            if (j>=2-i && j<=i+2)
            {
                printf("%c", ch);
                ch++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}