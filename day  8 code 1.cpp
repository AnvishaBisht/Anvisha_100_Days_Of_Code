//write a program to  input a haraccter and check whether it is uppercase alphabet , lowercase alphabet , digit or a special character #include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an Uppercase Alphabet.", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a Lowercase Alphabet.", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a Digit.", ch);
    }
    else {
        printf("%c is a Special Character.", ch);
    }

    return 0;
}
