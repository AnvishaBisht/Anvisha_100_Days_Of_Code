//write a program that accepts a peercentageb (0-100) and assigns a grade based on the followinng criteria :
90-100: grade A
80-89:grade B 
70-79:grade C 
60-69:grade D
below 69:grade F 

#include <stdio.h>

int main() {
    float percentage;

    printf("Enter percentage (0 to 100): ");
    scanf("%f", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage!");
    }
    else if (percentage >= 90) {
        printf("Grade A");
    }
    else if (percentage >= 80) {
        printf("Grade B");
    }
    else if (percentage >= 70) {
        printf("Grade C");
    }
    else if (percentage >= 60) {
        printf("Grade D");
    }
    else {
        printf("Grade F");
    }

    return 0;
}
