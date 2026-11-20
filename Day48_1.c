#include <stdio.h>

int main(void) {
    char s1[256], s2[256];
    char doubled[512];

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    // find lengths (and strip trailing newlines)
    int len1 = 0, len2 = 0;
    while (s1[len1] != '\0' && s1[len1] != '\n') len1++;
    while (s2[len2] != '\0' && s2[len2] != '\n') len2++;
    s1[len1] = '\0';
    s2[len2] = '\0';

    int is_rotation = 0;

    if (len1 == len2 && len1 > 0) {
        // build s1 + s1
        for (int i = 0; i < len1; i++) {
            doubled[i] = s1[i];
            doubled[i + len1] = s1[i];
        }
        doubled[2 * len1] = '\0';

        // look for s2 inside doubled
        for (int i = 0; i < len1 && !is_rotation; i++) {
            int j = 0;
            while (j < len2 && doubled[i + j] == s2[j]) {
                j++;
            }
            if (j == len2) {
                is_rotation = 1;
            }
        }
    }

    if (is_rotation) {
        printf("The second string is a rotation of the first.\n");
    } else {
        printf("The second string is not a rotation of the first.\n");
    }

    return 0;
}