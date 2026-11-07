#include<stdio.h>
int main() {
    int y[]={10,20,30,40,50,60,70} , i ,sum=0;
    int size = sizeof(y)/ sizeof(int);
    for(i = 0;i<size;i++)
        sum = sum + y[i];

    printf("sum : %d",sum);

    return 0;
}