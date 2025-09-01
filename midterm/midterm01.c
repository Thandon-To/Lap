#include <stdio.h>

int main() {
    int n;
    int i, j;
    int isPrime;

    printf("Enter number :\n");
    if (scanf("%d", &n) != 1) return 0;

    i = n;
    while (i >= 2) {             /* ไล่ i จาก n ลงมา 2 */
        isPrime = 1;

        j = 2;
        while (j * j <= i) {     /* ตรวจตัวหารถึง ~sqrt(i) */
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
            j++;
        }

        if (isPrime) {
            printf("%d ", i);
        }

        i--;
    }

    printf("\n");
    return 0;
}
