//Write a Program to Count positive, negative, and zero elements in an array.

#include <stdio.h>
int main()
{
    int n, i;
    int arr[100];
    int positive = 0, negative = 0, zero = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("\nPositive elements = %d", positive);
    printf("\nNegative elements = %d", negative);
    printf("\nZero elements = %d", zero);

    return 0;
}
