// This program shows you how to calculate the pow of a number

#include<stdio.h>
//65535
int powE(int base, int pow){
    if(pow == 1){
        return base;
    }
    // base  = 3 pow is 3
    // 3*3*3
    //3*(3(3))
    return base * powE(base, pow - 1);
}

int main(void){
    int base, pow, output;
    printf("Enter the base number and the pow: \n");
    printf("base: \n");
    scanf("%d", &base);
    printf("pow: \n");
    scanf("%d", &pow);
    output = powE(base, pow);
    printf("The result is %d\n", output);
    return 0;
}