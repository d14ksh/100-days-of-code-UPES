/*
Q94: Find the longest word in a sentence.

Sample Test Cases:

Input 1:
I love programming

Output 1:
programming
*/

#include <stdio.h>

int main() {
    char str[200], longest[100];
    int i = 0, j = 0;
    int length = 0, maxLength = 0, start = 0;

    fgets(str, sizeof(str), stdin);

    while (1) {

        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            length++;
        }
        else {
            if (length > maxLength) {
                maxLength = length;
                start = i - length;
            }

            length = 0;
        }

        if (str[i] == '\0' || str[i] == '\n')
            break;

        i++;
    }

    for (j = 0; j < maxLength; j++) {
        longest[j] = str[start + j];
    }

    longest[j] = '\0';

    printf("%s", longest);

    return 0;
}
