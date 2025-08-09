#include<stdio.h>

int main  () {
    int a,b,c,Answer;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);  

     Answer = a+b+c;

    printf("You entered: %d %d %d\n", a, b, c);
    printf("Sum = %d\n", Answer);

    return 0;
}