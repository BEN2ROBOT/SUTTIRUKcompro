#include <stdio.h>

int main() {
    int matrix[3][3];
    int row, col;

    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }

    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

 
    int a = matrix[0][0];
    int b = matrix[0][1];
    int c = matrix[0][2];
    int d = matrix[1][0];
    int e = matrix[1][1];
    int f = matrix[1][2];
    int g = matrix[2][0];
    int h = matrix[2][1];
    int i2 = matrix[2][2];
    int de = a * (e * i2 - f * h) - b * (d * i2 - f * g) + c * (d * h - e * g);
    printf("Determinant = %d\n", de);
    return 0;
}
