#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch =='U') 
    {
        printf("Character %c is vowel.", ch);
    } 
    
    else
    {
        printf("Character %c is consonent.", ch);
    }
    
    return 0;
    
}