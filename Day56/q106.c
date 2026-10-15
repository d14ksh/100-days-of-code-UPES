/*
Q106: Write a program to take an array arr[] of integers as
input and find the next greater element for each element.

The next greater element is the nearest element on the right
which is greater than the current element.

If there is no greater element on the right, print -1.

N.B:
- Print the output for each element in comma separated fashion.
- Do not use Stack.
- Use brute force approach (nested loops).

Sample Test Cases:

Input 1:
arr = [1, 3, 2, 4]
Output 1:
3, 4, 4, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
8, -1, 1, 3, -1

Input 3:
arr = [1, 2, 3, 5]
Output 3:
2, 3, 5, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, -1, -1, -1
*/

#include <stdio.h>

int main() {
    int n, arr[100];
    int i, j, next;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        next = -1;

        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }

        printf("%d", next);

        if (i < n - 1) {
            printf(", ");
        }
    }

    return 0;
}
