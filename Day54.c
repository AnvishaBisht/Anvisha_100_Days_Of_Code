#include <stdio.h>

int main(void) {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    long long total = (long long)n * (n + 1) / 2;  // sum of 1..n
    long long left_sum = 0;
    int pivot = -1;

    for (int x = 1; x <= n; x++) {
        left_sum += x;                         // sum of 1..x
        long long right_sum = total - left_sum + x;  // sum of x..n

        if (left_sum == right_sum) {
            pivot = x;
            break;
        }
    }

    printf("%d\n", pivot);

    return 0;
}