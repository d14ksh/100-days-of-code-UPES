/*
Q76: Check if a matrix is symmetric.

Sample Test Cases:

Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False
*/

#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[100][100];
    int symmetric = 1;

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (rows != cols) {
        symmetric = 0;
    }
    else {
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    symmetric = 0;
                    break;
                }
            }
        }
    }

    if (symmetric == 1)
        printf("True");
    else
        printf("False");

    return 0;
}
