#include <stdio.h>

int main()
{
    int age = 30;
    int *pAge = &age;
    printf("%p", &age);
    return 0;
}
