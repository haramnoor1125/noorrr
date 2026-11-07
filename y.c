#include <stdio.h>
int main(){
    int x[2][3] ,i , j;

    for(i = 0; i < 2 ; i++){
        for(j = 0 ; j < 3; j++)
            printf("%d" , x[i][j]);
        printf("\n");
    }
    printf("\n====================\n");

    for(i = 0; i < 2 ; i++){
        for(j = 0 ; j < 3; j++){
            printf("Enter a next record: ");
            scanf("%d" , &x[i][j]);
        }
         printf("\n");
    }
    printf("\n====================\n");

    for(i = 0; i < 2 ; i++){
        for(j = 0 ;j < 3; j++)
            printf("%d\n" , x[i][j]);
        printf("\n");
    }

    return 0;
}