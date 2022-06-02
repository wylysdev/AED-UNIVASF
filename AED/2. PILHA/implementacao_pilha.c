#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
    implementação de pilha usando vetor
*/

#define STACK_MAX 10

int top = -1;

int stack[STACK_MAX];

int stack_pop(int *i);
int stack_push(int e);
int stack_top(int *i);
bool stack_is_empty();

void show(){
    for(int i = 0; i < top; i++){
        printf("%d\n ", stack[i]);
    }
    printf("\n-----------------\n");
}

int main(){

    int b;
    stack_push(1);
    stack_push(2);
    stack_push(5);
    show();
    stack_pop(&b);
    show();
    return 0;
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


