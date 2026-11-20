#include <stdio.h>

int majority_element(int nums[], int n) {
    // Phase 1: Boyer-Moore voting to find a candidate
    int candidate = 0, count = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: verify the candidate really appears more than n/2 times
    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            freq++;
        }
    }

    return (freq > n / 2) ? candidate : -1;
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

    printf("%d\n", majority_element(nums, n));

    return 0;
}