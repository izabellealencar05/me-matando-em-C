//Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes.
//Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma:
//1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a
//4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o
//código informado for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem
//como as quantidades de cada combustível.
#include <stdio.h>

int main() {
    int codigo = 0;
    int alcool = 0;
    int gasolina = 0;
    int diesel = 0;

    printf("Informe um codigo de 1 a 4 (para fechar = 4):\n");

    while (1) {
        scanf("%d", &codigo);

        if (codigo == 4) {
            printf("MUITO OBRIGADO\n");
            break;
        } else if (codigo == 1) {
            alcool++;
        } else if (codigo == 2) {
            gasolina++;
        } else if (codigo == 3) {
            diesel++;
        } else {
            printf("CODIGO INVALIDO! Informe um codigo de 1 a 4:\n");
        }
    }

    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}
