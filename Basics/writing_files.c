#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpointer = fopen("test.txt", "w");
    fprintf(fpointer, "testing");
    fclose(fpointer);
    return 0;
}
