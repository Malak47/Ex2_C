#include <stdio.h>
#include "my_mat.h"

#define SIZE 10

int main() {
    char ch;
    while (ch != 'D') {
        printf("Enter one of the chars: A/B/C/D\n");
        scanf("%s", &ch);
        switch (ch) {
            case 'A':;
                printf("Enter %d numbers: ", (SIZE * SIZE));
                int arr[SIZE][SIZE];
                for (int i = 0; i < SIZE; i++) {
                    for (int j = 0; j < SIZE; j++) {
                        scanf("%d", &arr[i][j]);
                    }
                }
                A(arr);
                printf("Done with A\n");
                break;

            case 'B':;
                int i;
                int j;
                scanf("%d%d", &i, &j);
                B(i, j);
                printf("Done with B\n");
                break;

            case 'C':;
                int k;
                int l;
                scanf("%d%d", &k, &l);
                C(k, l);
                printf("Done with C\n");
                break;

            case 'D':;
                printf("ByeBye!!\n");
                D();
                break;
        }
    }
    return 0;
}


