#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two numbers to swapp the values: \n");
    scanf("%d %d", &a, &b);
    
    printf("Numbers before swapping: a = %d, b = %d \n", a, b);
    
    // swapping numbers without a third variable
    // 65535 + 1
    a = a + b;
    b = a - b; 
    a = a - b;

    printf("Numbers after swapping: a = %d, b = %d \n", a, b);
    
    printf("%ld - ", sizeof(int));
    //0xFFFF
    return 0;
}