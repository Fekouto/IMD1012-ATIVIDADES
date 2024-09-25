#include <stdio.h>

#define MAX_N 1000
#define MAX_M 1000

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int terreno[MAX_N][MAX_M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &terreno[i][j]);
        }
    }
    for (int i = 1; i < N - 1; i++) {
        for (int j = 1; j < M - 1; j++) {
            if (terreno[i][j] == 42 &&
                terreno[i-1][j-1] == 7 && terreno[i-1][j] == 7 && terreno[i-1][j+1] == 7 &&
                terreno[i][j-1] == 7 &&                             terreno[i][j+1] == 7 &&
                terreno[i+1][j-1] == 7 && terreno[i+1][j] == 7 && terreno[i+1][j+1] == 7) {
                printf("%d %d\n", i+1, j+1); // Adicionamos 1 às coordenadas para torná-las base 1
                return 0; 
            }
        }
    }
    printf("0 0\n");

    return 0;
}
