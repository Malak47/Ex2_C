#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#define MAXVAL INT_MAX
#define SIZE 10
int matrix[SIZE][SIZE];

void FloydWarshall(int arr[10][10]) {
    /*
     * 1)_ change the principal diagonal into 0
     * 2)_ for each i!=j, if arr[i][j] is equal to 0, then change matrix[i][j] to max_INTEGER_value (2147483647)
     */
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (arr[i][j] != 0) {
                matrix[i][j] = arr[i][j];
            } else {
                matrix[i][j] = MAXVAL;
            }
            if (i == j) {
                matrix[i][j] = 0;
            }
        }
    }
    for (int k = 0; k < SIZE; k++) {
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                if (j != k && i != k) {
                    int a1 = matrix[i][k]; //vertically
                    int a2 = matrix[k][j]; //horizontally
                    int a3 = matrix[i][j]; //vertically but for all the matrix in each k

                    if (a1 == MAXVAL || a2 == MAXVAL) { // in this case for sure the cell has a value that equals or smaller than (a1+a2)
                        continue;
                    }
                    /*
                     * find the minimum path
                     */
                    int min = (a1 + a2);
                    if (a3 > min) {
                        matrix[i][j] = min;
                    }
                }
            }
        }
    }
}

void A(int arr[SIZE][SIZE]) {
    /*
     * copy the values of arr to matrix
     */
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = arr[i][j];
        }
    }

    FloydWarshall(matrix);
    /*
     * change the 0 and max_INTEGER_value values into -1
     */
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matrix[i][j] == 0 || matrix[i][j] == MAXVAL) {
                matrix[i][j] = -1;
            }
        }
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