#include <stdio.h>

int main() {

    int n, i, size, count = 0;

    int x[] = {31, 98, 52, 79, 7, 15, 62, 7, 98, 82, 3, 19, 7, 15, 45, 7};

    printf("Enter a number: ");
    scanf("%d", &n);

    size = sizeof(x) / sizeof(int);

    for(i = 0; i < size; i++) {
        if(x[i] == n) {
            count++;
        }
    }

    printf("%d matching records found...", count);

    return 0;
}    