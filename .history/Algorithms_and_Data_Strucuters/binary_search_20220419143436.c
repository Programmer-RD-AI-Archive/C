#include <stdio.h>
int binary_search(int arr[], int val, int l_idx, int r_idx);
int main()
{
    int unsorted[] = {9, 5, 13, 3, 8, 7, 2, 12, 6, 10, 4, 11, 1};
    int sorted[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int index = binary_search(sorted, 12, 0, 12);
    printf("%d", index);
    return 0;
