#include <stdio.h>

int main() {

    int i,a[5];
    for( i = 0 ; i < 5 ; i++){
        printf("\n Enter a next value: ");
        scanf("%d", &a[i]);
    }

    printf("\n-------------------------\n");

    for( i = 0 ; i < 5 ; i++){
        printf("%d", a[i]);
        printf("\n");
    }

    

    return 0;
}
