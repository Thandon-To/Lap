#include<stdio.h>

int main() {

    int n;

    printf("Input : ");
    scanf("%d",&n);

    if (n % 2 == 0) {
        printf("%d is an even integer", n);
    }
    else 
    {
        printf("%d is an odd integer", n);
    }
    
    
}