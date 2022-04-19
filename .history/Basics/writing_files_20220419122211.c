#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpointer = fopen("test.txt", "w");
    fclose(fpointer);
    return 0;
}
