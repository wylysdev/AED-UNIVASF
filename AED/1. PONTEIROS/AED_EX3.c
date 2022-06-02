#include <stdio.h>
#include <stdlib.h>

void loop_na_lista(float vetor[3][3]){
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            
            printf( "%p \n", &vetor[i][j] );
            
        }
    }
    return;
}

void main(){
    float lista_float[3][3];
    loop_na_lista(lista_float);
    return 0;
}