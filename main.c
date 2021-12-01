#include <stdio.h>
#include "my_mat.h"

#define SIZE 10

int main() {
    char ch;
    while (ch != 'D') {
        scanf("%s", &ch);
        switch (ch) {
            case 'A':;
                int arr[SIZE][SIZE];
                for (int i = 0; i < SIZE; i++) {
                    for (int j = 0; j < SIZE; j++) {
                        scanf("%d", &arr[i][j]);
                    }
                }
                A(arr);
                break;

            case 'B':;
                int i;
                int j;
                scanf("%d%d", &i, &j);
                B(i, j);
                break;

            case 'C':;
                int k;
                int l;
                scanf("%d%d", &k, &l);
                C(k, l);
                break;

            case 'D':;
                D();
                break;
        }
    }
    return 0;
}


