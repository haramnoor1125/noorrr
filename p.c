#include <stdio.h>

int main() {

    int x[] = {31, 98, 52, 79, 7, 15, 62, 95, 21, 82}, i;

    int size = sizeof(x) / sizeof(x[0]);

    for(i = 0; i < size; i++) 
        if(x[i] % 2 == 0)
            printf("%d ", x[i]);
    

    return 0;
}
