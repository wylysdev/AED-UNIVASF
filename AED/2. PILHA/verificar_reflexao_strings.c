#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
    
*/

#define STACK_MAX 10

int top = -1;
int stack[STACK_MAX];
int size = 6;

// cabeçario
int stack_pop(char *i);
int stack_push(char e);
int stack_top(char *i);
bool stack_is_empty();
void show();

int main(){
    char expressao[6] = {"ABCBA"};
    bool valid = false;
    bool aux = false; // controller segunda fase
    
    for(int i = 0; i < size; i++){
        if(expressao[i] == 'C'){
            printf("\nigual a C");
            i++;
            aux = true;
        }
        if(aux){ // controller segunda fase
            char e;
            stack_top(&e);
            if(e == expressao[i]){
                char y;
                stack_pop(&y);
                printf("\npop");
            } 
        } else { // primeira fase
            stack_push(expressao[i]);
            printf("\npush");
        }
        
    }
    
    if(stack_is_empty){
        valid = true;
    }

    if (valid){
        printf("\nVALIDA");
    } else {
        printf("\nNAO VALIDA");
    }

    
}

void show(){
    for(int i = 0; i < top; i++){
        printf("%d\n ", stack[i]);
    }
    printf("\n-----------------\n");
}

int stack_pop(char *i){
    if(!stack_is_empty()){
        *i= stack[top]; // archive last item
        top--;  // define new top
        return 1;
    } else {
        return 0;
    }
}

int stack_push(char e){
    if(top + 1 < STACK_MAX){
        top++;
        stack[top] = e;
        return 1;
    }
    return 0;
}

int stack_top(char *i){
    if(!stack_is_empty()){
        *i = stack[top];
        return 1;    
    }
    return 0;
}

bool stack_is_empty() {

   if(top == -1){
      return true;
   }
   else{
      return false;
   }
}

/*

//  LIXO

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



#define STACK_MAX 10

int top = -1;
int stack[STACK_MAX];
int size = 7;

// cabeçario
int stack_pop(char *i);
int stack_push(char e);
int stack_top(char *i);
bool stack_is_empty();
void show();

int main(){
    
    char expressao[7] = {"ABCBA"};
    bool valid = true;
    int step = 1; // controller segunda fase
    int count_aux = 0;
    
    for(int i = 0; i < size; i++){
        if(expressao[i] == 'C'){ // chegou ao meio da expressao
            printf("\nigual a C");
            step = 2;
        }
        if(step == 2){ // chegou a segunda parte da expressao
            char e;
            stack_top(&e);
            //printf("\nprimeiro %c, topo %c ", expressao[count_aux],e);
            if(e == expressao[i]){
                char y;
                stack_pop(&y);
                printf("\npop %c, posicao: %d", y, i);
            }
        } else { // primeira fase
            if(expressao[i] != 'C'){ // para pular apos encontrar o C
                stack_push(expressao[i]);
                printf("\npush %c, posicao: %d", expressao[i], i);
            }
        }
        
    }
    
    if(!stack_is_empty){
        // se não for vazia,
        valid = false;
    }

    if (valid){
        printf("\n======== VALIDA ========");
    } else {
        printf("\n======== NAO VALIDA ========");
    }

    
}

void show(){
    for(int i = 0; i < top; i++){
        printf("%d\n ", stack[i]);
    }
    printf("\n-----------------\n");
}

int stack_pop(char *i){
    if(!stack_is_empty()){
        *i= stack[top]; // archive last item
        top--;  // define new top
        return 1;
    } else {
        return 0;
    }
}

int stack_push(char e){
    if(top + 1 < STACK_MAX){
        top++;
        stack[top] = e;
        return 1;
    }
    return 0;
}

int stack_top(char *i){
    if(!stack_is_empty()){
        *i = stack[top];
        return 1;    
    }
    return 0;
}

bool stack_is_empty() {

   if(top == -1){
      return true;
   }
   else{
      return false;
   }
}

*/