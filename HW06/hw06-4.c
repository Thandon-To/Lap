#include <stdio.h>

int main()
{

    int n;
    int sum = 0, term = 0;

    printf("Enter number : ");
    scanf("%d", &n);

    printf("Series = ");
    for (int i = 1; i <= n; i++)
    {
        term = term * 10 + 9;
        printf("%d", term);
        if (i < n) printf(" + ");
        sum += term;
    }
    printf("\n");

    printf("Sum = %d\n", sum);
    return 0;
}