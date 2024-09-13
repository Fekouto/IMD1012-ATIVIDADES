#include <stdio.h>

int main() {
    int N;
    
    while (scanf("%d", &N) != EOF) {
        int votos[N];
        int negativos = 0, positivos = 0;
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &votos[i]);
            if (votos[i] == 0) {
                negativos++;
            } else if (votos[i] == 1) {
                positivos++;
            }
        }
        
        double auxi = (double) 2 / 3 * N;
        
        if (positivos >= auxi) {
            printf("impeachment\n");
        } else {
            printf("acusacao arquivada\n");
        }
    }
    
    return 0;
}