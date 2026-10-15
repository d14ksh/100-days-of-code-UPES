/*
Q100: Print all sub-strings of a string.

Sample Test Cases:

Input 1:
abc

Output 1:
a,ab,abc,b,bc,c
*/

#include <stdio.h>

int main() {
    char str[100];
    int i, j, k, length = 0;
    int first = 1;

    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length; i++) {
        for (j = i; j < length; j++) {

            if (!first) {
                printf(",");
            }

            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            first = 0;
        }
    }

    return 0;
}
