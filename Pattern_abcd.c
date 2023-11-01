#include <stdio.h>

int main()
{
    char ch = 'a';
    for (int i = 0; i <=4; i++)
    {
        ch = 'a';
        for (int j = 0; j<=4; j++)
        {
            if (j>=0 && j<=i)
            {
                printf("%c",ch);
                ch += 1;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        ch += 1;
    }

    return 0;
}