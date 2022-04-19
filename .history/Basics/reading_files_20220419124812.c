#include <stdio.h>
int main()
{
    char line[];
    FILE *fpointer = fopen("test.txt", "r");
    fgets(line, fpointer);
    fclose(fpointer);
}
