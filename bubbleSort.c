#include <stdio.h>

void printArray(int* A, int arraySize){
   for(int i = 0; i < arraySize; i++){
        printf("%d ", A[i] );
    }
    printf("\n");
}

void swapp(int *a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void asscending(int *a, int *b){
    if(*a > *b){
        swapp(a, b);
    }
}

void desscending(int *a, int *b){
    if(*a < *b){
        swapp(a, b);
    }
}

void bubbleSort(int *A, int arraySize, void (*option)(int *, int *)){
    for (int j  = 0; j < arraySize - 1; j++){
        for(int i = 0; i < arraySize - 1 - j; i++ ){
                /* if(A[i] > A[i+1]){
                    swapp(&A[i], &A[i+1]);
                } */
                option(&A[i], &A[i+1]);
        }
    }
}


int main(void){
    int arraySize = 6;
    int array[6] = {9, 8, 5, 3, 2, 10};
    printArray(array, arraySize);
    bubbleSort(array, arraySize, &desscending);
    printArray(array, arraySize);
    return 0;
}