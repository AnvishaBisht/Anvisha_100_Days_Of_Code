#include <stdio.h>

int main(void) {
    char str[256];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // strip trailing newline
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    str[len] = '\0';

    int i = 0;
    while (i < len) {
        // skip spaces
        while (i < len && str[i] == ' ') {
            i++;
        }

        // find the end of the current word
        int start = i;
        while (i < len && str[i] != ' ') {
            i++;
        }
        int end = i - 1;

        // reverse the word in place
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }

    printf("Result: %s\n", str);

    return 0;
}