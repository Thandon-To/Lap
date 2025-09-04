#include <stdio.h>

int main()
{

    int n;
    printf("Enter number :\n");
    scanf("%d", &n);

    int i = n;
    while (i >= 2) //วนตรวจสอบเลขทุกตัวจาก n ลงมาเรื่อย ๆ
    {
        int j = 2;
        while (j * j <= i && i % j != 0) //ตรวจสอบว่าเลข i ที่กำลังดูอยู่นั้นเป็น จำนวนเฉพาะ หรือเปล่า
        {
            j++;
        }
        if (j * j > i)
        {
            printf("%d ", i);
        }
        i--;
    }
    return 0;
}
