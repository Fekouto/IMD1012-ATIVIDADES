#include <stdio.h>

int main() {
    float numero;
    int somatorio=0;
    for (int i = 0; i < 6; ++i) {
        scanf("%f",&numero);
        if(numero>0){
            somatorio++;
        }
    }
    printf("%d valores positivos\n",somatorio);

    return 0;
}