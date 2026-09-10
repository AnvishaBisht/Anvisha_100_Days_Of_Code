//find the digit that occurs most times in an integer number

#include <stdio.h>

int main() {
    long long num;
    int digit, count[10] = {0};
    int max = 0, mostDigit = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    for (digit = 0; digit <= 9; digit++) {
        if (count[digit] > max) {
            max = count[digit];
            mostDigit = digit;
        }
    }

    printf("Digit occurring most times = %d\n", mostDigit);
    printf("It occurs %d times.", max);

    return 0;
}
