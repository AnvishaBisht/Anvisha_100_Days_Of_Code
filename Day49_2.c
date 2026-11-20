#include <stdio.h>

int main(void) {
    char str[256];

    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin);

    // find length (strip trailing newline) and skip trailing spaces
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    while (len > 0 && str[len - 1] == ' ') {
        len--;
    }

    // find where the last word (surname) starts
    int last_start = len;
    while (last_start > 0 && str[last_start - 1] != ' ') {
        last_start--;
    }

    // print initials of every word before the surname
    int new_word = 1;
    for (int i = 0; i < last_start; i++) {
        if (str[i] == ' ' || str[i] == '\t') {
            new_word = 1;
        } else if (new_word) {
            char ch = str[i];
            if (ch >= 'a' && ch <= 'z') {
                ch -= 32;
            }
            printf("%c. ", ch);
            new_word = 0;
        }
    }

    // print the surname in full
    for (int i = last_start; i < len; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}