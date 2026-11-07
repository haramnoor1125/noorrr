#include <stdio.h>

int main() {

    int x[5] = {11, 56, 9, 43, 21};
    int y[5];

    int i,j, size;

    size = sizeof(x) / sizeof(int);

    for(i = 0; i < size; i++)
        printf("%d ", y[i]);
    j = size - 1;
    for(i = 0; i < size; i++) {
        y[i] = x[j--];
    }
    printf("\n\n");

    for(i = 0; i < size; i++)
        printf("%d ", y[i]);

    return 0;
}
