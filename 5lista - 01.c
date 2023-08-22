//Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
//mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
//programa deve finalizar quando forem digitados dois valores iguais.

#include <stdio.h>
int main(){
    int x, y;
    while (1){
        printf("escreva um valor de x: ");
        scanf("%d", &x);
        printf("escreva um valor de y: ");
        scanf("%d", &y);

    if (x > y){
        printf("DECRESCENTE\n");
    }
    else if (x < y){
        printf("CRESCENTE\n");
    } else if (x == y){
        printf("valores iguais\n");
        break;
    }
}
    return 0;
}
