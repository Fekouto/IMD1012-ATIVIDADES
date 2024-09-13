#include <stdio.h>

int main() {
    int pares[5], impares[5];
    int num, count_pares = 0, count_impares = 0;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            pares[count_pares] = num;
            count_pares++;
            if (count_pares == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n",j, pares[j]);
                }

                count_pares = 0;
            }
        } else {
            impares[count_impares] = num;
            count_impares++;
            if (count_impares == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n",j, impares[j]);
                }

                count_impares = 0;
            }
        }
    }
    for (int i = 0; i < count_impares; i++) {
        printf("impar[%d] = %d\n",i, impares[i]);
    }
    for (int i = 0; i < count_pares; i++) {
        printf("par[%d] = %d\n",i, pares[i]);
    }
    return 0;
}