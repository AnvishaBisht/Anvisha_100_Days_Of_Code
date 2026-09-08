#include <stdio.h>

int main() {
    int arr[] = {12, 7, 9, 14, 6, 3, 8, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);

    return 0;
}
