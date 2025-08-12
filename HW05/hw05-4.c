#include<stdio.h>

int main() {

    int a,b;

    printf("Input 1 : ");
    scanf("%d", &a);
    printf("Input 2 : ");
    scanf("%d", &b);

    if( a < b ){
        printf("Number1 lower than Number2");
    }
    else if ( a > b )
    {
        printf("Number1 greater than Number2");
    }
    else if ( a = b )
    {
        printf("Number1 equal Number2");
    }
    else{
        printf("Invalid");
    }
    
}