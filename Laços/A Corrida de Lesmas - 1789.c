#include <stdio.h>
 
int main() {
    int velocidade, rep;
    
    // Loop para processar vários casos de teste até o final do arquivo (EOF)
    while (scanf("%d", &rep) != EOF) {
        int auxi = 0, maior = 0;
        
        // Loop para verificar as velocidades
        for (int y = 0; y < rep; y++) {
            scanf("%d", &velocidade);
            
            if (velocidade < 10) {
                auxi = 1;
            } else if (velocidade >= 10 && velocidade < 20) {
                auxi = 2;
            } else if (velocidade >= 20) {
                auxi = 3;
            }
            
            if (auxi > maior) {
                maior = auxi;
            }
        }
        
        // Imprime a classificação máxima das velocidades
        printf("%d\n", maior);
    }
    
    return 0;
}