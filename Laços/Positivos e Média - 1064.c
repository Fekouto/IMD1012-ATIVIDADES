#include <stdio.h>
int main() {
    float numero;
    int somatorio=0;
    float media,valor=0;
    
    for(int i=0;i<6;++i){
        scanf("%f",&numero);
        if(numero>0){
            somatorio++;
            valor+=numero;
        }
    }
    media=valor/somatorio;
    printf("%d valores positivos\n",somatorio);
    printf("%.1f\n",media);
    
    return 0;
}