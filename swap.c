#include <stdio.h>
/* swap two integers numbers with a third variable*/
void swap(int* a, const int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(){
    int number1;
    int number2;
    printf("Please introduce 2 numbers: \n");
    scanf("%d", &number1);
    scanf("%d", &number2);
    printf("Swapping the 2 numbers \n");

    printf("Variables before swapping: %d - %d \n", number1, number2);
    swap(&number1, &number2);
    printf("Variables after swapping: %d - %d\n", number1, number2);
    return 0;
}