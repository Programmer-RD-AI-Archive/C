#include <stdio.h>

int max(int num1, int num2)
{
    if (num1 < num2)
    {
        return num2;
    }
    else
    {
        return num1;
    }
    return 0;
}
