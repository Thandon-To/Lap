#include <stdio.h>

int main()
{

    int n;

    printf("Input : ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        for (int i = 0; i <= n; i++)
        {
            printf("[%d] Hello World\n", i);
        }
    }
    else
    {
        for (int i = 0; i <= n; i++)
        {
            printf("(%d) Hello World\n", i);
        }
    }
}