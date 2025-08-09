#include<stdio.h>

int main() {
    char input[11];
    int working;
    float amount;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", input); 

    printf("Input the working hrs: ");
    scanf("%d", &working);

    printf("Salary amount/hr: ");
    scanf("%f", &amount);

    printf("\nExpected Output:\n");
    printf("Employees ID = %s \n",input);
    printf("Salary = U$ %.2f \n", working*amount);
}