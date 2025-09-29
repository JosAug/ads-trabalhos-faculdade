#include <stdio.h>
int main()  {
    //movimento da torre 5 casas a direita;
    int torre = 0, rainha = 0, bispo = 0, cavalo =1;
    printf("Movimento da torre:\n");
    for (torre = 0; torre < 5; torre++) {
        printf("Direita\n");
    }

    //movimento da rainha 8 casas a esquerda;
    printf("Movimento da rainha:\n");
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha < 8);

    //movimento do bispo 5 casas na diagonal;
    printf("Movimento do bispo:\n");
    while (bispo < 5) {
        printf("Cima, Direita\n");
        bispo++;
    }

    //movimento do cavalo 2 casas pra baixo e 1 casa pra esquerda;
    printf("Movimento do cavalo:\n");
    while (cavalo > 0) {
       for (int i = 0; i < 2; i++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        cavalo--;
    }
}
