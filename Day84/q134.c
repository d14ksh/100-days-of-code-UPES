/*
Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT,
and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed
*/

#include <stdio.h>
#include <string.h>

int main() {
    enum Status {
        SUCCESS,
        FAILURE,
        TIMEOUT
    };

    char input[20];
    enum Status status;

    scanf("%s", input);

    if (strcmp(input, "SUCCESS") == 0)
        status = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0)
        status = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0)
        status = TIMEOUT;
    else {
        printf("Invalid input");
        return 0;
    }

    switch (status) {
        case SUCCESS:
            printf("Operation successful");
            break;

        case FAILURE:
            printf("Operation failed");
            break;

        case TIMEOUT:
            printf("Operation timed out");
            break;
    }

    return 0;
}
