#include <stdio.h>
#include <stdlib.h>

/*
    Organizar

*/

int main (){

    char expressao[20] = {"())((A+B))"};

    int aux = 0;

    for (int i =0; i < 20; i++){
        if(expressao[i] == '('){
            aux++;
        }
        else if (expressao[i] == ')'){
            aux--;
        }
    
        if(aux == -1){
            printf ("Não esta formatado!\n");
            break;
        }
    }

    if(aux == 0)
        printf("Sucesso");
    else 
        printf("Deu ruim");

    return 0;

}