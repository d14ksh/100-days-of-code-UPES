/*
Q80: Multiply two matrices.

Sample Test Cases:

Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12

Output 1:
58 64
139 154
*/

#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    int i, j, k;
    int a[100][100], b[100][100], result[100][100];

    scanf("%d %d", &rows1, &cols1);

    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d %d", &rows2, &cols2);

    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if (cols1 == rows2) {

        for (i = 0; i < rows1; i++) {
            for (j = 0; j < cols2; j++) {
                result[i][j] = 0;

                for (k = 0; k < cols1; k++) {
                    result[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        for (i = 0; i < rows1; i++) {
            for (j = 0; j < cols2; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("Matrix multiplication not possible");
    }

    return 0;
}
