#include <stdio.h>

int main(void) {
    int num1, num2, num3;

    printf("Input[1] : ");
    scanf("%d",&num1);
    printf("Input[1] : ");
    scanf("%d",&num2);
    printf("Input[1] : ");
    scanf("%d",&num3);

    if (num1 >= num2) {
        if (num1 >= num3) {
            // num1 มากที่สุด
            if (num2 >= num3) {
                printf(" %d %d %d\n", num1, num2, num3);
            } else {
                printf(" %d %d %d\n", num1, num3, num2);
            }
        } else {
            // num3 > num1 >= num2
            printf(" %d %d %d\n", num3, num1, num2);
        }
    } else { // num2 > num1
        if (num2 >= num3) {
            // num2 มากที่สุด
            if (num1 >= num3) {
                printf("%d %d %d\n", num2, num1, num3);
            } else {
                printf("%d %d %d\n", num2, num3, num1);
            }
        } else {
            // num3 > num2 > num1
            printf("%d %d %d\n", num3, num2, num1);
        }
    }

    return 0;
}
