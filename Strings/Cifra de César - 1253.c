#include <stdio.h>
#include <string.h>

int main()
{
    int entrada, variacao;

    scanf("%d", &entrada);
    getchar();

    for (int i = 0; i < entrada; i++){
        char frase[100] = {0};

        fgets(frase, 100, stdin);
        scanf("%d", &variacao);
        getchar();

        int tamanho = strlen(frase);

        for (int j = 0; j < tamanho-1; j++){
            frase[j]=frase[j]-variacao;
            if(frase[j]<65){
                frase[j]=frase[j] + 26;
            }
        }
        puts(frase);
    }

    return 0;
}