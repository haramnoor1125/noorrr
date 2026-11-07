#include <stdio.h>

int main() {

    int x[2][3];

    printf("2D Array: %d\n", x);
    printf("1st 1D Array: %d\n", x[0]);
    printf("1st int var of 1st 1D Array: %d", &x[0][0]);

    return 0;
}

