#include <stdio.h>

int pivot_index(int nums[], int n) {
    long long total = 0;
    for (int i = 0; i < n; i++) {
        total += nums[i];
    }

    long long left_sum = 0;
    for (int i = 0; i < n; i++) {
        long long right_sum = total - left_sum - nums[i];

        if (left_sum == right_sum) {
            return i;            // leftmost pivot found
        }
        left_sum += nums[i];
    }
    return -1;
}

int main(void) {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("%d\n", pivot_index(nums, n));

    return 0;
}