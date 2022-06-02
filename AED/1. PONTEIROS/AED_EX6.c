#include <stdio.h>
#include <stdlib.h>

void fun(int *a, int *b, int *c) {
    
    int ordenador[5];
    int ordenadorAux[3];
    
    // [ ][ ][ ][ ][ ]
    //  0  1  2  3  4
    
    int aux1 = *a;
    int aux2 = *b;
    int aux3 = *c;
    
    // INICIALIZANDO O VETOR COM ZERO
    for (int i = 0; i<5; i++){
        ordenador[i] = 0;
    }
    
    if(*b > *c) {
        ordenador[3] = *b;
        ordenador[1] = *c;
        
        if( *a < *b){
            ordenador[0] = *a;
        }
        else {
            ordenador[4] = *a;
        }
    }
    
    int i_aux = 0;
    for (int i = 0; i<5; i++){
        if( ordenador[i] != 0) {
            ordenadorAux[i_aux] = ordenador[i];
            i_aux++;
        }
    }
    
    *a = ordenadorAux[0];
    *b = ordenadorAux[1];
    *c = ordenadorAux[2];

}

int main(){
    
    int a, b, c;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    printf("%d, %d, %d \n", a, b, c);
    
    fun(&a, &b, &c);
    
    printf("%d, %d, %d", a, b, c);
    
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

void fun(int *a, int *b, int *c) {
    
    int ordenador[5];
    int ordenadorAux[3];
    
    // [ ][ ][ ][ ][ ]
    //  0  1  2  3  4
    
    int aux1 = *a;
    int aux2 = *b;
    int aux3 = *c;
    
    // INICIALIZANDO O VETOR COM ZERO
    for (int i = 0; i<5; i++){
        ordenador[i] = -1;
    }
    
    // 
    if(*b > *c) {
        
        ordenador[3] = *b;
        ordenador[1] = *c;
        
        if( *a > ordenador[3]){
            ordenador[4] = *a;
        }
        else {
            ordenador[2] = *a;
        }
        
    } else {
        ordenador[1] = *b;
        ordenador[3] = *c;
        
        if( *a > ordenador[3]){
            ordenador[4] = *a;
        }
        else {
            ordenador[2] = *a;
        }
    }
    
    int i_aux = 0;
    for (int i = 0; i<5; i++){
        if( ordenador[i] != -1) {
            ordenadorAux[i_aux] = ordenador[i];
            i_aux++;
        }
    }
    
    *a = ordenadorAux[0];
    *b = ordenadorAux[1];
    *c = ordenadorAux[2];

}

int main(){
    
    int a, b, c;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    printf("%d, %d, %d \n", a, b, c);
    
    fun(&a, &b, &c);
    
    printf("%d, %d, %d", a, b, c);
    
    return 0;
}

// 100 FUNCIONAL

#include <stdio.h>
#include <stdlib.h>

void fun(int *a, int *b, int *c) {
    
    int ordenador[5];
    int ordenadorAux[3];
    
    // [ ][ ][ ][ ][ ]
    //  0  1  2  3  4
    
    int aux1 = *a;
    int aux2 = *b;
    int aux3 = *c;
    
    // INICIALIZANDO O VETOR COM ZERO
    for (int i = 0; i<5; i++){
        ordenador[i] = 0;
    }
    
    ordenadorAux[0] = *a;
    ordenadorAux[1] = *b;
    ordenadorAux[2] = *c;
    
    // 
    if(*b > *c) {
        
        ordenador[3] = *b;
        ordenador[1] = *c;
        
        if( *a > ordenador[3]){
            ordenador[4] = *a;
        }
       else if(*a > ordenador[1]) {
            
            ordenador[2] = *a;
            
        } else {
            
            ordenador[0] = *a;
            
        }
        
    } else {
        ordenador[1] = *b;
        ordenador[3] = *c;
        
        if( *a > ordenador[3]){
            ordenador[4] = *a;
        }
        else if(*a > ordenador[1]) {
            
            ordenador[2] = *a;
            
        } else {
            
            ordenador[0] = *a;
            
        }
    }
    
    int i_aux = 0;
    for (int i = 0; i<5; i++){
        if( ordenador[i] != 0) {
            ordenadorAux[i_aux] = ordenador[i];
            i_aux++;
        }
    }
    
    *a = ordenadorAux[0];
    *b = ordenadorAux[1];
    *c = ordenadorAux[2];

}

int main(){
    
    int a, b, c;
    
    printf("Digite numeros > 0 :) \n");
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    printf("%d, %d, %d \n", a, b, c);
    
    fun(&a, &b, &c);
    
    printf("%d, %d, %d", a, b, c);
    
    return 0;
}


// QUESTÃO 3 OTIMIZADA


#include <stdio.h>
#include <stdlib.h>

void sort(int *a, int *b, int *c) {
    
    int ordenador[5]; // vetor usado para começar a ordenar os 3 valores
    int ordenadorAux[3];
    
    // INICIALIZANDO O VETOR COM ZERO
    for (int i = 0; i<5; i++){
        ordenador[i] = 0;
    }
    
    // ANALISA (B) e (C)
    if(*b > *c) {
        ordenador[3] = *b;
        ordenador[1] = *c;
    } else {
        ordenador[1] = *b;
        ordenador[3] = *c;  
    }
    
    // ANALISA ONDE (A) VAI FICAR
    if( *a > ordenador[3]){
            ordenador[4] = *a;
        }
        else if(*a > ordenador[1]) {
            ordenador[2] = *a;
        } else {
            ordenador[0] = *a;
        }
    
    // roda dentro do primeiro vetor, e onde não for zero ele pega o valor e armazena no outro vetor de forma sequencial
    int i_aux = 0;
    for (int i = 0; i<5; i++){
        if( ordenador[i] != 0) {
            ordenadorAux[i_aux] = ordenador[i];
            i_aux++;
        }
    }
    
    *a = ordenadorAux[0]; *b = ordenadorAux[1]; *c = ordenadorAux[2];

}

int main(){
    
    int a, b, c;
    
    printf("Digite numeros > 0 :) \n");
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    printf("%d, %d, %d \n", a, b, c);
    
    sort(&a, &b, &c);
    
    printf("%d, %d, %d", a, b, c);
    
    return 0;
}