#include <stdio.h>
int main()
{
    char line[0255];
    FILE *fpointer = fopen("test.txt", "r");
    fgets(line, 255, fpointer);
    printf("%s", line);
    fclose(fpointer);
}
