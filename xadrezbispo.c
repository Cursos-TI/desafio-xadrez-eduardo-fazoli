#include <stdio.h>

#define TAMANHO_TABULEIRO 9


void tabuleiro(int x, int y) {
    for (int i = 1; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 1; j < TAMANHO_TABULEIRO; j++) {
            if (i == x && j == y) {
                printf("♟  "); 
            } else {
                printf("⬜ ");
            }
        }
        printf("\n");
    }
}


int valido(int xatualbispo, int yatualbispo, int xnovobispo, int ynovobispo) {
    int diferencaxbispo = xnovobispo - xatualbispo;
    int diferencaybispo = ynovobispo - yatualbispo;
    
    if (diferencaxbispo == diferencaybispo || diferencaxbispo == -diferencaybispo) {
        return 1;
    } else {
        return 0;
    }
    }


int main() {


    int x = 1, y = 3;  // Posição do bispo
    int xnovobispo, ynovobispo; // posição para onde o bispo vai ir
    char continuar;
    int cont = 0;
    do {
        if(cont == 0){
        tabuleiro(x, y);
        cont++;
        }

        printf("digite a nova linha em que a bispo vai estar (de 1 a 8): \n");
        scanf("%d", &xnovobispo);
        printf("digite a nova coluna em que a bispo vai estar (de 1 a 8): \n");
        scanf("%d", &ynovobispo);
        
        // Verifica se o movimento é válido
        if (x - y == xnovobispo - ynovobispo || x + y == xnovobispo + ynovobispo) {
            x = xnovobispo;
            y = ynovobispo;

        } else {
            printf("Movimento inválido! o bispo só pode se mover na diagonal!\n");
        }

        //torre
        
        tabuleiro(x, y);
        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');
    return 0;
}


