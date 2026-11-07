# include <stdio.h>
int main() {
    int y[3]= {11 ,44 , 88}, i;
    int size= sizeof(y)/ sizeof(int);

    for(i = 0;i<size;i++)
        printf("%d\n" , y[i]);


    return 0;
}