#include <stdio.h>

void func1(){
    printf("hello from func1 \n");
}

void func2(void){
    printf("hello from func2 \n");
}

int main(){
    func1("arg1");

    // This is going to crash
    // func2("arg2")
    func2();
    return 0;
}