/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:

Input 1:
I love coding

Output 1:
I evol gnidoc
*/

#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start, end, j;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {

        if (str[i] == ' ') {
            printf(" ");
            i++;
        }
        else {
            start = i;

            while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
                i++;
            }

            end = i - 1;

            for (j = end; j >= start; j--) {
                printf("%c", str[j]);
            }
        }
    }

    return 0;
}
