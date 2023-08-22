//Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de
//senha incorreta informada, escrever a mensagem "Senha Invalida! Tente novamente:". Quando a senha
//for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo
//encerrado. Considere que a senha correta é o valor 2002.
#include <stdio.h>
int main(){
    int senha = 2002;
    int tentativa;
    while (1){
        printf(" \nDIGITE A SENHA: ");
        scanf("%d", &tentativa);
        if (tentativa != senha){
            printf("\nSENHA INVALIDA! TENTE NOVAMENTE");
        } else if (tentativa == senha){
            printf("\nSENHA CORRETA!");
    break;
        }
     }
}
