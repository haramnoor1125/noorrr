#include <stdio.h>

int main() {

    int y[2][3] = {{3 , 5 , 7} , {11 , 9 , 21}};
    int z[2][3];
    int i , j;

    int sz1 = sizeof(y) / sizeof(y[2]);
    int sz2 = sizeof(y[0]) / sizeof(int);

    for(i = 0 ; i < sz1 ; i++){
        for(j = 0 ; j < sz2 ; j++){
            printf("%d ",y[i][j]);
        }
        printf("\n");
        
    }

    printf("\n-----------------------\n");

    for(i = 0 ; i < sz1 ; i++){
        for(j = 0 ; j < sz2 ; j++){
            z[i][j]=y[i][sz2 - j -1];
        }
        printf("\n");
    }
    printf("\n-----------------------\n");

    for(i = 0 ; i < sz1 ; i++){
        for(j = 0 ; j < sz2 ; j++){
            printf("%d ",z[i][j]);
        }
        printf("\n");
    }    


    return 0;
}