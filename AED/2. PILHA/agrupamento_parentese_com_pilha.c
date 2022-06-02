#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
    
*/

#define STACK_MAX 10

int top = -1;
int stack[STACK_MAX];


// cabeçario
int stack_pop(int *i);
int stack_push(int e);
int stack_top(int *i);
bool stack_is_empty();
void show();

int main(){

    char expressao[20] = {"(())"};
    bool valid = true;

    int i = 0;
    while (i < 20){
        i++;
        if(expressao[i] == '(' || expressao[i] == '{' || expressao[i] == '['){
            stack_push(expressao[i]);
        }
        if(expressao[i] == ')' || expressao[i] == '}' || expressao[i] == ']'){
            if(stack_is_empty()){
               valid = false;
            } else  {
                int e;
                stack_pop(&e);
                if(e != expressao[i]){
                    valid = false;
                }
            }
        }
    }

    if(!stack_is_empty())
        valid = false;

    if (valid){
        printf("SUCESSO");
    } else {
        printf("DES-SUCESSO");
    }

    
}

void show(){
    for(int i = 0; i < top; i++){
        printf("%d\n ", stack[i]);
    }
    printf("\n-----------------\n");
}

int stack_pop(int *i){
    if(!stack_is_empty()){
        *i= stack[top]; // archive last item
        top--;  // define new top
        return 1;
    } else {
        return 0;
    }
}

int stack_push(int e){
    if(top + 1 < STACK_MAX){
        top++;
        stack[top] = e;
        return 1;
    }
    return 0;
}

int stack_top(int *i){
    if(!stack_is_empty()){
    *i = stack[top];
    return 1;    
    }
    return 0;
    
}

bool stack_is_empty() {

   if(top == -1)
      return true;
   else
      return false;
}


