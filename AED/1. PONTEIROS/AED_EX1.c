#include <stdio.h>
#include <stdlib.h>

void fun(int *a, int b){
    *a = (*a) + b;
    return;
}

void main(){

    int a = 11; 
    int b = 4;

    printf("ANTES a: %d, b: %d\n", a, b);
    
    fun(&a, b);
    
    printf("DEPOIS a: %d, b: %d", a, b);
    
    return 0;
}