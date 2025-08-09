#include <stdio.h>

int main(void) {
    char hex[256];
    int i = 0, printed = 0;

    printf("User input :\n");         // ป้ายกำกับฝั่งอินพุต
    if (scanf("%255s", hex) != 1) return 0;

    printf("Output:\n");              // ป้ายกำกับฝั่งเอาต์พุต

    while (hex[i] != '\0') {
        char c = hex[i];
        if (c >= 'a' && c <= 'f') c = c - 'a' + 'A';

        int val;
        switch (c) {
            case '0': val = 0;  break; case '1': val = 1;  break;
            case '2': val = 2;  break; case '3': val = 3;  break;
            case '4': val = 4;  break; case '5': val = 5;  break;
            case '6': val = 6;  break; case '7': val = 7;  break;
            case '8': val = 8;  break; case '9': val = 9;  break;
            case 'A': val = 10; break; case 'B': val = 11; break;
            case 'C': val = 12; break; case 'D': val = 13; break;
            case 'E': val = 14; break; case 'F': val = 15; break;
            default: printf("Invalid input\n"); return 0;
        }

        for (int bit = 3; bit >= 0; bit--) {
            int b = (val >> bit) & 1;
            if (!printed) {
                if (b) { putchar('1'); printed = 1; }
            } else {
                putchar(b ? '1' : '0');
            }
        }
        i++;
    }

    if (!printed) putchar('0');  // เครสที่อินพุตคือ "0"
    putchar('\n');
    return 0;
}
