//insert an element in an array at a given position 

#include <stdio.h>

int main() {
    int n, i, element, position;

    scanf("%d", &n);

    int a[n + 1];

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &element);
    scanf("%d", &position);

    // Shift elements to the right
    for(i = n; i >= position; i--) {
        a[i] = a[i - 1];
    }

    // Insert element
    a[position - 1] = element;

    // Print array
    for(i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
