#include <stdio.h>
#include <stdlib.h>

int main(){
    
    // declaration
    int vetor[5];
    
    // povoando
    for(int i = 0; i<5; i++){
        scanf("%d", &vetor[i]);
    }
    
    //mostrando end do itens
    for(int i = 0; i<5; i++){
        
        if( vetor[i] % 2 == 0)
            printf("%p\n", &vetor[i]);
        else {
            printf("Voce n digitou nenhum numero par");
            break;
        }
    }
    
    return 0;
}