/* This is an example of bubblesort algorithm*/

#include<stdio.h>

int main(void){
    int A[10] = {7,8,9,10,11,5,4,3,1,0};
    int i = 0;
    for(i = 0; i < 10 - 1; i++ ){
        for(int j = 0; j < 10 - 1 - i; j++){
            if(A[j] < A [j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }

    for (i = 0; i < 10; i++){
        printf("A[%d]=%d\n", i, A[i]);
    }
    return 0;

}