#include <stdio.h>

int x[5];

int main() {

    printf("%d\n", &x[0]);
    printf("%d\n", &x[1]);
    printf("%d\n", &x[2]);
    printf("%d\n", &x[3]);
    printf("%d\n", &x[4]);

    return 0;
}