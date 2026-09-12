//delete an element from an array 

#include <stdio.h>

int main() {
    int n, i, position;

    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &position);

    // Shift elements to the left
    for(i = position - 1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    n--;

    // Print the array
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
