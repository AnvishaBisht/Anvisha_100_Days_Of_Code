//insert an element in a sorted array at the appropriate position

#include <stdio.h>

int main() {
    int n, i, element, pos;

    scanf("%d", &n);

    int a[n + 1];

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &element);

    pos = 0;

    // Find the appropriate position
    while(pos < n && a[pos] < element) {
        pos++;
    }

    // Shift elements to the right
    for(i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    // Insert the element
    a[pos] = element;

    // Print the new array
    for(i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
