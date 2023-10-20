#include <stdio.h>
int main()
{
    int a=10, b=20, temp;
    temp = a;
    a = b;
    b = temp;
    printf("The vaue of a is %d & b is %d", a, b);
}