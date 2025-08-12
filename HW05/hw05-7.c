#include<stdio.h>

int main(){

    int y,d;

    printf("Year(s) : ");
    scanf("%d",&y);

    if( y % 4 != 0) {
        printf("February has 28 days ");
    }
    else if (y % 4 == 0 && y % 100 == 0 && y % 400 != 0)
    {
        printf("February has 28 days ");
    }
    else if (y % 4 == 0 && y % 100 != 0)
    {
        printf("February has 29 days ");
    }
    else if (y % 4 == 0 && y % 400 == 0)
    {
        printf("February has 29 days ");
    }
    
    
}