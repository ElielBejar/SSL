#include <stdio.h>

int main(){

    FILE *file = fopen("output.txt", "wt");

    printf("Hola mundo");
    fputs("Hola mundo", file);

    return 0;
}