#include <stdio.h>

int main()
{
    int age1, age2;

    printf("Enter age1: ");
    scanf("%d", &age1);

    printf("Enter age2: ");
    scanf("%d", &age2);

    if(age1<age2)
    {
        printf("age2 is bigger then age1");        
    }
    else if(age1>age2)
    {
        printf("age1 is bigger then age2");        
    }
    else
    {
        printf("age1 is equal to age2");   
    }

    return 0;
}
