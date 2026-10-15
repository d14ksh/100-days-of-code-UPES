/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:

Input 1:
John David Doe

Output 1:
J.D. Doe
*/

#include <stdio.h>

int main() {
    char name[100];
    int i, lastSpace = 0;

    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0' && name[i] != '\n'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    printf("%c.", name[0]);

    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c.", name[i + 1]);
        }
    }

    printf(" ");

    for (i = lastSpace + 1; name[i] != '\0' && name[i] != '\n'; i++) {
        printf("%c", name[i]);
    }

    return 0;
}
