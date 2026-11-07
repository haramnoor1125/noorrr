#include <stdio.h>

int main() {

    int w[2][3] = {{3, 5, 7}, {11, 9, 21}};
    int v[2][3];
    int i, j;

    int sz1 = sizeof(w) / sizeof(w[2]);
    int sz2 = sizeof(w[0]) / sizeof(int);

    for(i = 0; i < sz1; i++) {
        for(j = 0; j < sz2; j++) {
            printf("%d ", w[i][j]);
        }
        printf("\n");
    }

    printf("\n------------------\n");

    for(i = 0; i < sz1; i++) {
        for(j = 0 ; j < sz2; j++) {
            v[i][j] = w[sz1 - i - 1][j];
        }
        printf("\n");
    }

    printf("\n------------------\n");

    for(i = 0; i < sz1; i++) {
        for(j = 0; j < sz2; j++) {
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }

    return 0;
}