#include <stdio.h>

int main() {

    int a[5];

    printf("Enter a value: ");
    scanf("%d", &a[0]);

    printf("Enter b value: ");
    scanf("%d", &a[1]);
    
    printf("Enter c value: ");
    scanf("%d", &a[2]);
    
    printf("Enter d value: ");
    scanf("%d", &a[3]);
    
    printf("Enter e value: ");
    scanf("%d", &a[4]);

    printf("\n---------------------\n");

    printf("a~ %d\n", a[0]);
    printf("b~ %d\n", a[1]);
    printf("c~ %d\n", a[2]);
    printf("d~ %d\n", a[3]);
    printf("e~ %d", a[4]);

    return 0;
}
