#include <stdio.h>

int main(void) {
    char str[256];

    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin);

    int new_word = 1;  // true at the start of each word

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ' ' || str[i] == '\t') {
            new_word = 1;
        } else if (new_word) {
            char ch = str[i];
            if (ch >= 'a' && ch <= 'z') {
                ch -= 32;  // convert to uppercase
            }
            printf("%c.", ch);
            new_word = 0;
        }
    }
    printf("\n");

    return 0;
}