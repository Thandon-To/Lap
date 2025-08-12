#include<stdio.h>

int main(){

    int a, b, c;

    printf("Test case: ");
    scanf("%d %d %d",&a,&b,&c);

    printf("1st Number = %d\n", a);
    printf("2nd Number = %d\n", b);
    printf("3rd Number = %d\n", c);

    if(a > b && a > c ) {
        printf("The 1rd Number is the greatest among three");
    }
    else if (b > a && b > c)
    {
        printf("The 2rd Number is the greatest among three");
    }
    else if (c > a && c > b)
    {
        printf("The 3rd Number is the greatest among three");
    }
    else
    {
        printf("Invalid");
    }
    
}