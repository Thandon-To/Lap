#include <stdio.h>

int main() {
    int n; //ใช้สำหรับเก็บตัวเลขที่ผู้ใช้ป้อนเข้ามา
    int i, j; //เป็นตัวนับหลักในลูปแรก ใช้แทนตัวเลขที่เรากำลังตรวจสอบว่าเป็นจำนวนเฉพาะหรือไม่
    int isPrime;

    printf("Enter number :\n");
    if (scanf("%d", &n) != 1) return 0;

    for (i = n; i >= 2; i--) {
        if (i < 2) continue;
        isPrime = 1;

        for (j = 2; j * j <= i; j++) { 
            if (i % j == 0) {           
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }
    return 0;
}
