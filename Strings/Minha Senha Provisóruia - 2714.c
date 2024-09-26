#include <stdio.h>
#include <string.h>

int validarSenha(char senha[]) {
    int i, tem_maiuscula = 0, tem_minuscula = 0, tem_numero = 0;

    if (strlen(senha) < 6 || strlen(senha) > 32)
        return 0;

    for (i = 0; senha[i] != '\0'; i++) {
        if (senha[i] >= 'A' && senha[i] <= 'Z')
            tem_maiuscula = 1;
        else if (senha[i] >= 'a' && senha[i] <= 'z')
            tem_minuscula = 1;
        else if (senha[i] >= '0' && senha[i] <= '9')
            tem_numero = 1;
        else
            return 0; 
    }

    return (tem_maiuscula && tem_minuscula && tem_numero);
}

int main() {
    char senha[100];

    while (scanf(" %[^\n]", senha) != EOF) {
        if (validarSenha(senha))
            printf("Senha valida.\n");
        else
            printf("Senha invalida.\n");
    }

    return 0;
}