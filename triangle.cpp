#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid side lengths.");
    }
    else if (a == b && b == c) {
        printf("Equilateral Triangle");
    }
    else if (a == b || b == c || a == c) {
        printf("Isosceles Triangle");
    }
    else {
        printf("Scalene Triangle");
    }

    return 0;
}
