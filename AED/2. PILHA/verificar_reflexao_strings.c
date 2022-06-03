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


