#include <stdio.h>
struct Student
{
    char name[];
    char major[];
    int age;
    double gpa;
};
int main()
{
    struct Student student1;
    return 0;
}
