#include <stdio.h>

int main() {

    int y[4] = {11, 44, 88, 55}, i;

    int size = sizeof(y) / sizeof(int);

    for(i=size-1;i>=0;i--)
        printf("%d\n", y[i]);

    return 0;
}
