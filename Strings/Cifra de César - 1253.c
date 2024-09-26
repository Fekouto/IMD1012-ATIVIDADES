#include <stdio.h>
#include <string.h>

int main()
{

    int entrada, variacao;

    scanf("%d", &entrada);

    for (int i = 0; i < entrada; i++){
        char frase[100]={0};

        fgets(frase, 100, stdin);
        scanf("%d", &variacao);

        for (int j=0;j<strlen(frase);j++){
            if(frase[j]>65){
                frase[j]=frase[j] + 26;
            }else{
                frase[j]=frase[j]-variacao;
            }
        }
        puts(frase);
    }



    return 0;
}