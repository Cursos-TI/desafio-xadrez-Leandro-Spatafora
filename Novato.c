#include <stdio.h>

int main(void){

    //Declarando e iniciando a variável de movimentos
    int movimentos = 1;

    //Loop que simula movimentação da Torre 5 casas para a direita
    do{
        printf("Torre: se moveu %d vez(es) para direita\n", movimentos);
        movimentos++;
    } while (movimentos <=5);
    movimentos = 1; //Atribui novo valor a variavel movimentos, possibilitando proximo loop
    printf("\n"); //Qubra de linha

    //Loop que simula movimentação do Bispo 5 casas para cima e direita
    while (movimentos <= 5){
        printf("Bispo se moveu %d vez(es) para cima, direita\n", movimentos);
        movimentos++;
    }
    printf("\n"); //Qubra de linha

    //Loop que simula movimentação da Rainha, 8 casas para esquerda
    for (int m = 1; m <= 8; m++){
        printf("Rainha se moveu %d vez(es) para esquerda\n", m);
    }

    return 0;
}