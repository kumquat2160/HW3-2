#include <stdio.h>
char toggleCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    }
    else if (ch >= 'a' && ch <= 'z') {
        return ch - ('a' - 'A');
    }
    return ch;
}
int main() {
    char input;
    printf("Enter an alphabetic character: ");
    scanf(" %c", &input);
    char result = toggleCase(input);
    printf("The toggled case of '%c' is '%c'\n", input, result);
    return 0;
}