#include<stdio.h>

int main() {
    int n;

    printf("Input : ");
    scanf("%d",&n);

    if ( n > 0 )
    {
        printf("Positive");
    }
    else if ( n < 0 )
    {
        printf("Negative");
    }
    
}