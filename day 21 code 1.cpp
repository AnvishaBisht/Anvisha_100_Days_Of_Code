//Write a program to swap the first and last digit of a number.



#include <stdio.h>

int main()
{
    int n, first, last, digits, power, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    // Find the highest power of 10
    power = 1;
    digits = n;

    while(digits >= 10)
    {
        digits = digits / 10;
        power = power * 10;
    }

    first = digits;

    // Remove first and last digit
    middle = (n % power) / 10;

    // Swap first and last digit
    result = last * power + middle * 10 + first;

    printf("Number after swapping = %d", result);

    return 0;
}
