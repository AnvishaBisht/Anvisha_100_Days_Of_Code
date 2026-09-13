//find the second largest element in an array 

#include <stdio.h>

int main() {
    int n, i;
    int a[100];
    int largest, secondLargest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    largest = secondLargest = -999999;

    for(i = 0; i < n; i++) {
        if(a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }
    }

    printf("Second largest element = %d", secondLargest);

    return 0;
}
