#include <stdio.h>
 
int main() {
    int maior=0,posicao,variavel;
    for(int i=0;i<100;++i){
        scanf("%d",&variavel);
        if(variavel>maior){
            maior=variavel;
            posicao=i+1;
        }
    }
    printf("%d\n%d\n",maior,posicao);
    return 0;
}