#include <stdio.h>
void functions_1()
{
    printf("Function 1");
}
void functions_2(char String[])
{
    printf("%s", String);
}
double cube(double num)
{
    double result = num * num * num;
    return result;
}
int main()
{
    functions_1();
    functions_2("Test");
    
    return 0;
}
