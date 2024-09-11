#include <stdio.h>
 
int main() {
    //VARIAVEIS
    int A,B,C;
    int MAIOR;
    //chamando variaveis
    scanf("%d %d %d",&A,&B,&C);
    //calculo
    MAIOR=A;
    if (B>MAIOR){
        MAIOR=B;
    }
    if (C>MAIOR){
        MAIOR=C;
    } 
    //MENSAGEM
    printf("%d eh o maior\n",MAIOR);
    return 0;
}