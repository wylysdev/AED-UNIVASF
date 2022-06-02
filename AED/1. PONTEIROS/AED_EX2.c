#include <stdio.h>
#include <stdlib.h>

void loop_na_lista(float vetor[10]){
    for(int i = 0; i<10; i++){
        printf("%p\n", &vetor[i]);
    }
    return;
}

void main(){
    
    float lista_float[10];
    
    loop_na_lista(lista_float);
    
    return 0;
}