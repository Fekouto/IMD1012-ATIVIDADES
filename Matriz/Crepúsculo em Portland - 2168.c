#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int mapa[N+1][N+1];
    char resultado[N][N];
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            scanf("%d", &mapa[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int cameras_funcionando = mapa[i][j] + mapa[i][j+1] + mapa[i+1][j] + mapa[i+1][j+1];
            if (cameras_funcionando >= 2) {
                resultado[i][j] = 'S';
            } else {
                resultado[i][j] = 'U';
            }
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
