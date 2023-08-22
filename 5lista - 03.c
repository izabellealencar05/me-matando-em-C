//Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no
//sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4). O
//algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
//escrever mensagem alguma)
//REVER!!!!!
#include <stdio.h>
int main(){
    float x, y;
    printf("escreva as coordenadas de X e Y: ");
    while(1){
        scanf("%d %d", &x, &y);

        if (x == 0 && y == 0){
            break;
        }
        if (x > 0 && y > 0) {
            printf("Q1\n");
        } else if (x < 0 && y > 0) {
            printf("Q2\n");
        } else if (x < 0 && y < 0) {
            printf("Q3\n");
        } else if (x > 0 && y < 0) {
            printf("Q4\n");
        } else {
            printf("Origem\n");
        }
    }

    return 0;
}
