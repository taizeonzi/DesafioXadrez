#include <stdio.h>
// Nível Mestre
/*Instrução: Para o desafio final, as peças que utilizam loops simples terão seus códigos trocados por funções recursivas, e a movimentação do cavalo utilizará loops
com variáveis múltiplas e/ou condições múltiplas, permitindo o uso de continue e break.*/

// movimento Torre
void moverTorre (int casas){
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas -1);
    }
}

// movimento Rainha
void moverRainha (int casas){
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas -1);
    }
}

int main(){
    int peca;
    int mover = 1;
    int i = 1;

    printf("Desafio Jogo de Xadrez\n");
    //menu do jogo
    printf("****** Simulação dos movimentos das peças ******\n");
printf("1. Movimento do Bispo\n");
printf("2. Movimento da Torre\n");
printf("3. Movimento da Rainha\n");
printf("4. Movimento do Cavalo\n");
printf("Escolha a peça para mover: \n");
scanf("%d", &peca);
//Movimentação das Peças:
//Bispo: 5 casas na diagonal direita para cima
//Torre: 5 casas para a direita
//Rainha: 8 casas para a esquerda
//Cavalo: 1 vez em L para cima à direita
//Obs: É obrigatório o uso de loops aninhados na movimentação do bispo e funções recursivas.

switch (peca){

//Bispo: 5 casas na diagonal direita para cima.
//Obs: É obrigatório o uso de loops aninhados na movimentação do bispo e funções recursivas.
case 1:
    printf("Movimentando o Bispo:\n");
for (int i = 1; i <= 5; i++){
    for (int j = 1; j <= 1; j++){
        printf("Direita\n");
    }
    printf("Cima\n");
    }
    break;

//Torre: 5 casas para a direita
case 2:
    printf("Movimentando a Torre:\n");
    moverTorre(5);
    break;

//Rainha: 8 casas para a esquerda
case 3:
    printf("Movimentando a Rainha:\n");
    moverRainha(8);
    break;

//Cavalo: 1 vez em L para cima à direita. A movimentação do cavalo utilizará loops com variáveis múltiplas e/ou condições múltiplas, permitindo o uso de continue e break.
case 4:
    printf("Movimentando o Cavalo:\n");
    for (int i = 0, j = 4; i < j; i++, j--){
        printf("Cima\n"); /*imprime 2 vezes*/
    }
    printf("Direita\n"); /*imprime 1 vez*/
    break;

default:
    printf("Opção inválida\n");
    break;
    }

    return 0;
}
