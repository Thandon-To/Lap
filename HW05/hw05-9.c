#include <stdio.h>

int main() {
    double ax, ay, bx, by;
    double mx, my;

    printf("Input A Point :\n");
    if (scanf("%lf %lf", &ax, &ay));

    printf("Input B Point :\n");
    if (scanf("%lf %lf", &bx, &by));

    mx = (ax + bx) / 2.0;
    my = (ay + by) / 2.0;

    printf("Mid Point of A and B is ( %.1f, %.1f )\n", mx, my);
    return 0;
}
