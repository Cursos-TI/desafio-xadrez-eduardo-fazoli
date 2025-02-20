#include <stdio.h>

#define TAMANHO_TABULEIRO 9


void tabuleiro(int x, int y) {
    for (int i = 1; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 1; j < TAMANHO_TABULEIRO; j++) {
            if (i == x && j == y) {
                printf("♕  "); 
            } else {
                printf("⬜ ");
            }
        }
        printf("\n");
    }
}

//rainha
int valido(int xatualrainha, int yatualrainha, int xnovorainha, int ynovorainha) {
    int diferencaxrainha = xnovorainha - xatualrainha;
    int diferencayrainha = ynovorainha - yatualrainha;
    
    if (diferencaxrainha == diferencayrainha || diferencaxrainha == -diferencayrainha) {
        return 1;
    } else {
        return 0;
    }
    }
//rainha

int main() {

//rainha
    int x = 1, y = 4;  // Posição da rainha
    int xnovorainha, ynovorainha; // posição para onde o bispo vai ir
    char continuar;
    int cont = 0;
    do {
        if(cont == 0){
        tabuleiro(x, y);
        cont++;
        }

        printf("Digite a nova linha em que a rainha vai estar (de 1 a 8): \n");
        scanf("%d", &xnovorainha);
        printf("Digite a nova coluna em que a rainha vai estar (de 1 a 8): \n");
        scanf("%d", &ynovorainha);
    
        if (x - y == xnovorainha - ynovorainha || x + y == xnovorainha + ynovorainha || (xnovorainha == x || ynovorainha == y)) {
            x = xnovorainha;
            y = ynovorainha;

        } else {
            printf("Movimento inválido! a rainha não pode se mover para lá!\n");
        }

        //rainha
        
        tabuleiro(x, y);
        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');
    return 0;
}


