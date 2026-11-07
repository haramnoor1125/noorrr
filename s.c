#include <stdio.h>

int main() {

    int x[5] = {11, 56, 9, 43, 21};
    int y[5];

    int i, size;

    size = sizeof(x) / sizeof(int);

    for(i = 0; i < size; i++)
        printf("%d ", y[i]);

    for(i = 0; i < size; i++) {
        y[i] = x[i];
    }

    printf("\n\n");

    for(i = 0; i < size; i++)
        printf("%d ", y[i]);

    return 0;
}
