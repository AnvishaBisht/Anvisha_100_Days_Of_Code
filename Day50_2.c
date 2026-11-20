#include <stdio.h>

int main(void) {
    char str[256];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // find length (and strip trailing newline)
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    str[len] = '\0';

    // i = start index, j = end index
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}