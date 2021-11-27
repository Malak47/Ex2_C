#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#define maxVal INT_MAX
#define SIZE 10
int matrix[SIZE][SIZE];

void FloydWarshall(int arr[10][10]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (arr[i][j] != 0) {
                matrix[i][j] = arr[i][j];
            } else {
                matrix[i][j] = maxVal;
            }
            if (i == j) {
                matrix[i][j] = 0;
            }
        }
    }
    int index = 0;
    for (int k = 0; k < SIZE; k++) {
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                if (j != index && i != index) {
                    int a1 = matrix[i][k];
                    int a2 = matrix[k][j];
                    int a3 = matrix[i][j];
                    if (a1 == maxVal || a2 == maxVal) {
                        continue;
                    }
                    int min = (a1 + a2);
                    if (a3 > min) {
                        matrix[i][j] = min;
                    }
                }
            }
        }
        index++;
    }
}

void A(int arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = arr[i][j];
        }
    }

    FloydWarshall(matrix);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matrix[i][j] == 0 || matrix[i][j] == maxVal) {
                matrix[i][j] = -1;
            }
        }
    }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void B(int i, int j) {
    if (matrix[i][j] == -1) {
        printf("False\n");
    } else {
        printf("True\n");
    }
}

void C(int i, int j) {
    printf("%d\n", matrix[i][j]);
}

void D() {
    exit(0);
}