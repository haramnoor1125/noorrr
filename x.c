
#include <stdio.h>

int main() {

    int x[2][3];

    printf("%d\n", x[0][0]);
    printf("%d\n", x[0][1]);
    printf("%d\n", x[0][2]);
    printf("------------------\n");
    printf("%d\n", x[1][0]);
    printf("%d\n", x[1][1]);
    printf("%d\n", x[1][2]);
    printf("###################\n");
    
    x[0][0] = 89;
    x[0][1] = 2;
    x[0][2] = 37;
    
    x[1][0] = 12;
    x[1][1] = 57;
    x[1][2] = 71;

    printf("###################\n");
    printf("%d\n", x[0][0]);
    printf("%d\n", x[0][1]);
    printf("%d\n", x[0][2]);
    printf("------------------\n");
    printf("%d\n", x[1][0]);
    printf("%d\n", x[1][1]);
    printf("%d\n", x[1][2]);

    return 0;
}
