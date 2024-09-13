#include <stdio.h>

int main() {
    int rep, num, primo;

    scanf("%d", &rep);

    for(int i = 0; i < rep; i++) {
        scanf("%d", &num);
        primo = 1; // Vamos presumir que o número é primo

        if(num <= 1) { // Se o número for menor ou igual a 1, não é primo
            primo = 0;
        }
        else {
            for(int j = 2; j * j <= num; j++) {
                if(num % j == 0) { // Se o número é divisível por algum número além de 1 e ele mesmo, não é primo
                    primo = 0;
                    break;
                }
            }
        }

        // Verifica se o número é primo e imprime a mensagem correspondente
        if(primo) {
            printf("%d eh primo\n", num);
        } else {
            printf("%d nao eh primo\n", num);
        }
    }
    return 0;
}