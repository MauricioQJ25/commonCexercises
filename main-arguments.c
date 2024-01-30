#include <stdio.h>
// int main(int argc, char** argv)
int main(int argc, char* argv[]){
    printf("The arguments are: \n");
    for(int i = 0; i < argc; i++){
        printf("argv[%d] = %s", i, argv[i]);
        printf("\n");
    }
/*
    char *h = "hola";
    char s[9] = "lola\0";
    printf("%s - %s -%c", h, s, *(int *)s);
*/
    return 0;
}