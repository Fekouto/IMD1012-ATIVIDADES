#include <stdio.h>

int main() {
    int dia, hora, minuto, segundo;
    int diaf, horaf, minutof, segundof;
    int diat, horat, minutot, segundot;
    char descricao[4]; // para armazenar a palavra "Dia"
    char lixo;

    // Lendo a descrição e o dia inicial
    scanf("%s %d", descricao, &dia);

    // Lendo a hora inicial
    scanf("%d %c %d %c %d", &hora, &lixo, &minuto, &lixo, &segundo);

    // Lendo a descrição e o dia final
    scanf("%s %d", descricao, &diaf);

    // Lendo a hora final
    scanf("%d %c %d %c %d", &horaf, &lixo, &minutof, &lixo, &segundof);

    // Realizando os cálculos
    if (segundo > segundof) {
        minutof--;
        segundof += 60;
    }
    if (minuto > minutof) {
        horaf--;
        minutof += 60;
    }
    if (hora > horaf) {
        diaf--;
        horaf += 24;
    }

    // Calculando as diferenças
    diat = diaf - dia;
    horat = horaf - hora;
    minutot = minutof - minuto;
    segundot = segundof - segundo;

    // Exibindo o resultado
    printf("%d dia(s)\n", diat);
    printf("%d hora(s)\n", horat);
    printf("%d minuto(s)\n", minutot);
    printf("%d segundo(s)\n", segundot);

    return 0;
}