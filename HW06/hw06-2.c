#include <stdio.h>

int main(void) {
    int n, num, i;

    if (scanf("%d", &n) != 1) return 0;
    num = n;

    printf("%d = ", n);

    /* thousands */
    for (i = 0; i < num / 1000; i++) printf("M");
    num %= 1000;

    /* hundreds */
    if (num >= 900) { printf("CM"); num -= 900; }
    else if (num >= 500) {
        printf("D");
        for (i = 0; i < (num - 500) / 100; i++) printf("C");
        num %= 100;
    } else if (num >= 400) { printf("CD"); num -= 400; }
    else {
        for (i = 0; i < num / 100; i++) printf("C");
        num %= 100;
    }

    /* tens */
    if (num >= 90) { printf("XC"); num -= 90; }
    else if (num >= 50) {
        printf("L");
        for (i = 0; i < (num - 50) / 10; i++) printf("X");
        num %= 10;
    } else if (num >= 40) { printf("XL"); num -= 40; }
    else {
        for (i = 0; i < num / 10; i++) printf("X");
        num %= 10;
    }

    /* ones */
    if (num == 9) printf("IX");
    else if (num >= 5) {
        printf("V");
        for (i = 0; i < num - 5; i++) printf("I");
    } else if (num == 4) printf("IV");
    else {
        for (i = 0; i < num; i++) printf("I");
    }

    printf("\n");
    return 0;
}
