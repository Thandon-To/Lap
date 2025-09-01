#include <stdio.h>

int main() {
    int n;
    int i, j;
    int isPrime;

    printf("Enter number :\n");
    if (scanf("%d", &n) != 1) return 0;

    i = n;
    do {
        if (i >= 2) {                  /* กันกรณี n < 2 ไม่ให้พิมพ์อะไร */
            isPrime = 1;

            j = 2;
            if (j * j <= i) {          /* มีเหตุให้เช็กอย่างน้อยหนึ่งครั้งค่อยเข้า do-while */
                do {
                    if (i % j == 0) {
                        isPrime = 0;
                        break;         /* ออกจากลูปในทันที */
                    }
                    j++;
                } while (j * j <= i);
            }

            if (isPrime) {
                printf("%d ", i);
            }
        }
        i--;
    } while (i >= 2);                  /* เงื่อนไขตรวจที่ท้ายลูปนอก */

    printf("\n");
    return 0;
}
