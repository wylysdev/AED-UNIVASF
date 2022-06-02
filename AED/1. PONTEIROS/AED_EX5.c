#include <stdio.h>
#include <stdlib.h>

void fun(int *a, int *b){

    int aux = *a;
    
    if( *a > *b ){
        *a = *b;
        *b = aux;
    }

}

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d, %d \n", a, b);
    fun(&a,&b);
    printf("%d, %d", a, b);
    return 0;
}