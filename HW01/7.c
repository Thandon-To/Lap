#include<stdio.h>

int main() {
    int c;

    printf("User input: ");
    scanf("%d", &c);

    float f = c * 9.0f/5.0f + 32.0f;

    printf("%d degree Celsius = %.1f degree Fahrenheit",c,f);
}