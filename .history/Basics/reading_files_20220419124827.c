#include <stdio.h>
int main()
{
    char line[];
    FILE *fpointer = fopen("test.txt", "r");
    fgets(line, fpointer);
    printf("%s", line);
    fclose(fpointer);
}
