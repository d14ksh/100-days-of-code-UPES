/*
Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:

Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6
*/

#include <stdio.h>

int main() {
    int n, i, element, position;
    int arr[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    position = n;

    for (i = 0; i < n; i++) {
        if (element < arr[i]) {
            position = i;
            break;
        }
    }

    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    n++;

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
