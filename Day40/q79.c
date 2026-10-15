/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:

Input 1:
3 3
1 2 3
4 5 6
7 8 9

Output 1:
1 2 4 7 5 3 6 8 9
*/

#include <stdio.h>

int main() {
    int rows, cols, i, j, d;
    int matrix[100][100];

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (d = 0; d < rows + cols - 1; d++) {

        if (d % 2 == 0) {
            for (i = rows - 1; i >= 0; i--) {
                j = d - i;

                if (j >= 0 && j < cols)
                    printf("%d ", matrix[i][j]);
            }
        }
        else {
            for (j = cols - 1; j >= 0; j--) {
                i = d - j;

                if (i >= 0 && i < rows)
                    printf("%d ", matrix[i][j]);
            }
        }
    }

    return 0;
}
