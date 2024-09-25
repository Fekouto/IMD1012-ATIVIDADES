#include <stdio.h>
#include <math.h>
#define VALOR_MAX 15
#define VALOR_MINIMO 0

void criandoMatriz(int entrada, int matriz[VALOR_MAX][VALOR_MAX]){

    for (int i = 0; i < entrada; i++){
        for (int j = 0; j < entrada; j++){
            matriz[i][j] = pow(2, i) * pow(2, j);
        }
    }
}

void printfMatriz(int entrada, int matriz[VALOR_MAX][VALOR_MAX], int digitos){
    for (int i = 0; i < entrada; i++){
        for (int j = 0; j < entrada; j++){
            if(j!=entrada-1){
            printf("%*d ",digitos, matriz[i][j]);
            }else{
            printf("%*d",digitos, matriz[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
}

int digitos(int entrada, int matriz[VALOR_MAX][VALOR_MAX]){

    int contador = 0, valor = matriz[entrada - 1][entrada - 1];

    while (valor != 0){
        valor = valor / 10;
        contador++;
    }
    return contador;
}

int main(){

    int matriz[VALOR_MAX][VALOR_MAX], entrada;

    scanf("%d", &entrada);

    while (entrada != 0){

        criandoMatriz(entrada, matriz);
        printfMatriz(entrada, matriz, digitos(entrada, matriz));

        scanf("%d", &entrada);
    }

    return 0;
}