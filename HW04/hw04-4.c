#include <stdio.h>

int main() {
    float h, w, t;

    printf("Enter Height and Width: ");
    scanf("%f %f", &h, &w);  

    t = 0.5 * h * w;  

    printf("Triangle Area = %.2f\n", t); 

    return 0;
}
