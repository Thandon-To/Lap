#include<stdio.h>

int main() {

    int C;
    float F;

    printf("User input : ");
    scanf("%d", &C);

    F =(C * 1.8) + 32;

    printf("%d degree Celsius = %.2f degree Fahrenheit ", C, F);

}