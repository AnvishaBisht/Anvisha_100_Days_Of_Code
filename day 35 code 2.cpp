//rotate an array to the right by K positions 

#include <stdio.h>

int main() {
    int n, k, i, j, temp;
    int a[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    // Rotate right k times
    for(i = 0; i < k; i++) {
        temp = a[n - 1];

        for(j = n - 1; j > 0; j--) {
            a[j] = a[j - 1];
        }

        a[0] = temp;
    }

    printf("Array after rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
