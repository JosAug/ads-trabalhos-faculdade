#include <stdio.h>
void movimento_torre(int recursoTorre){
    if (recursoTorre > 0) {
        printf("Direita\n");
        recursoTorre--;
        movimento_torre(recursoTorre);
    }
}
void movimento_rainha(int recursoRainha){
    if (recursoRainha > 0) {
        printf("Esquerda\n");
        recursoRainha--;
        movimento_rainha(recursoRainha);
    }
}
void movimento_bispo(int recursoBispo){
    for (recursoBispo; recursoBispo > 0; recursoBispo--) {
        for (recursoBispo; recursoBispo %2 ; recursoBispo--) {
            printf("cima\n");
        }
        printf("direita\n");
}
}
int main() {
    //movimento da torre 5 casas a direita;
    int torre = 5, rainha = 8, bispo = 5, cavalo = 2;
    printf("Movimento da torre:\n");
    movimento_torre(torre);

    //movimento da rainha 8 casas a esquerda;
    printf("Movimento da rainha:\n");
    movimento_rainha(rainha);

    //movimento do bispo 5 casas na diagonal;
    printf("Movimento do bispo:\n");
    movimento_bispo(bispo*2-1);

    //movimento do cavalo 2 casas pra cima e 1 casa pra direita;
    printf("Movimento do cavalo:\n");
    for (cavalo; cavalo > 0 ; cavalo--) {
        for (cavalo; cavalo ; cavalo--) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}
    
