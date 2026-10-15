/*
Q89: Count frequency of a given character in a string.

Sample Test Cases:

Input 1:
programming
g

Output 1:
2
*/

#include <stdio.h>

int main() {
    char str[100], ch;
    int i = 0, count = 0;

    scanf("%s", str);
    scanf(" %c", &ch);

    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }

        i++;
    }

    printf("%d", count);

    return 0;
}
