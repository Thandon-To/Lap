#include<stdio.h>

int main () {
    int day,sce;

    printf("Input Days : ");
    scanf("%d", &day);

    sce = day * 86400;

    printf("%d days = %d seconds",day, sce);
    return 0;
}