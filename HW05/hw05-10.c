#include <stdio.h>

int main(void) {
    int score;
    printf("enter score : ");
    if (scanf("%d", &score) != 1) return 0;

    if (score < 0 || score > 100) {
        printf("Invalid score!\n");
        return 0;
    }

   switch (score / 5) {
        case 20: case 19: case 18: case 17: case 16:
            printf("A !\n");  break;
        case 15:
            printf("B+ !\n"); break;
        case 14:
            printf("B !\n");  break;
        case 13:
            printf("C+ !\n"); break;
        case 12:
            printf("C !\n");  break;
        case 11:
            printf("D+ !\n"); break;
        case 10:
            printf("D !\n");  break;
        default: // 0..9
            printf("F !\n");  break;
    }
    return 0;
}
