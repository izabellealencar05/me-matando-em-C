//Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a
//média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao
//intervalo [0,10]). Cada nota deve ser validada separadamente.
#include <stdio.h>

int main() {
    float nota, nota2;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota);
    while (nota < 0 || nota > 10) {
        printf("NOTA INVALIDA! \nTENTE NOVAMENTE: ");
        scanf("%f", &nota);
    }

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    while (nota2 < 0 || nota2 > 10) {
        printf("NOTA INVALIDA!\nTENTE NOVAMENTE: ");
        scanf("%f", &nota2);
    }

    float media = (nota + nota2) / 2;
    printf("A media das duas notas e: %.2f", media);

    return 0;
}
