#include <stdio.h>

int main() {

    int x[] = {31, 98, 52, 79, 7, 15, 62, 95, 98, 82}, i;

    int size = sizeof(x) / sizeof(x[0]), n;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(i = 0; i < size; i++) 
        if(x[i] == n) {
            printf("\nYes Found ");
            break;
        }
        
    if(i==size)
        printf("\nNot Found");

    return 0;
}