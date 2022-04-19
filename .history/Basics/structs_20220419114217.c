#include <stdio.h>
struct Student
{
    char name[50];
    char major[];
    int age;
    double gpa;
};
int main()
{
    struct Student student1;
    return 0;
}
