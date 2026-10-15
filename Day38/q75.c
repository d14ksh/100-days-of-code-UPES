/*
Q75: Add two matrices.

Sample Test Cases:

Input 1:
2 2
1 2
3 4
2 2
5 6
7 8

Output 1:
6 8
10 12
*/

#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    int i, j;
    int a[100][100], b[100][100], sum[100][100];

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

    if (rows1 == rows2 && cols1 == cols2) {

        for (i = 0; i < rows1; i++) {
            for (j = 0; j < cols1; j++) {
                sum[i][j] = a[i][j] + b[i][j];
            }
        }

        for (i = 0; i < rows1; i++) {
            for (j = 0; j < cols1; j++) {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("Matrix addition not possible");
    }

    return 0;
}
