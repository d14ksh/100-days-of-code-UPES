/*
Q107: Write a program to take an array arr[] of integers as
input and find the previous greater element for each element.

The previous greater element is the nearest element on the left
which is greater than the current element.

If there is no greater element on the left, print -1.

N.B:
- Print the output for each element in comma separated fashion.
- Do not use Stack.
- Use brute force approach (nested loops).

Sample Test Cases:

Input 1:
arr = [1, 3, 2, 4]
Output 1:
-1, -1, 3, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
-1, -1, 8, 8, 8

Input 3:
arr = [1, 2, 3, 5]
Output 3:
-1, -1, -1, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, 5, 4, 3
*/

#include <stdio.h>

int main() {
    int n, arr[100];
    int i, j, previous;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        previous = -1;

        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                previous = arr[j];
                break;
            }
        }

        printf("%d", previous);

        if (i < n - 1) {
            printf(", ");
        }
    }

    return 0;
}
