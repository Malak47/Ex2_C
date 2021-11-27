#include <stdio.h>
#include "my_mat.h"

#define SIZE 10

//int main() {
//    int arr[10][10] = {{0, 3, 1, 0, 0, 2, 0, 0, 0, 0},
//                       {3, 0, 1, 0, 0, 0, 0, 0, 0, 0},
//                       {1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
//                       {0, 0, 0, 0, 0, 0, 0, 5, 0, 0},
//                       {0, 0, 0, 0, 0, 0, 0, 4, 1, 1},
//                       {2, 0, 0, 0, 0, 0, 2, 0, 0, 0},
//                       {0, 0, 0, 0, 0, 2, 0, 0, 0, 0},
//                       {0, 0, 0, 5, 4, 0, 0, 0, 0, 2},
//                       {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
//                       {0, 0, 0, 0, 1, 0, 0, 2, 0, 0}};
//
//    A(arr);
//
//
//    return 0;
//}
int main() {
    char ch;
    while (ch != 'D') {
        printf("Enter one of the chars: A/B/C/D\n");
        scanf("%s", &ch);
        printf("You entered %s \n", &ch);
        switch (ch) {
            case 'A':;
                printf("Enter %d numbers: ", (SIZE*SIZE));
                int arr[SIZE][SIZE];
                for (int i = 0; i < SIZE; i++) {
                    for (int j = 0; j < SIZE; j++) {
                        scanf("%d", &arr[i][j]);
                    }
                }
                A(arr);
                printf("Finish A\n");
                break;

            case 'B':;
                int i;
                int j;
                scanf("%d%d", &i, &j);
                B(i, j);
                printf("Finish B\n");
                break;

            case 'C':;
                int k;
                int l;
                scanf("%d%d", &k, &l);
                C(k, l);
                printf("Finish C\n");
                break;

            case 'D':;
                D();
                printf("Finish D\n");
                break;
        }
    }
    return 0;
}


