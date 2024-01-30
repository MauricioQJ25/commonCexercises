// This programs calculate factorial of a provided number

#include <stdio.h>

int factorial(int n){
    if( (n == 0) || (n == 1)){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main(void){
    int number;
    printf("This program calculates the factorial of a number \n");
    printf("Enter the number: ");
    scanf("%d", &number);
    printf(" %d Factorial  = %d \n", number, factorial(number));
    return 0;
}
