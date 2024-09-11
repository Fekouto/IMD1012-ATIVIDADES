#include <stdio.h>
 
int main() {
    //variaveis
    double A,B,C;
    double TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    //chamando as variaveis
    scanf("%lf %lf %lf\n",&A,&B,&C);
    //calculos
    TRIANGULO=(A*C)/2;
    CIRCULO=3.14159*C*C;
    TRAPEZIO=C*(A+B)/2;
    QUADRADO=B*B;
    RETANGULO=A*B;
    //MENSAGEM
    printf("TRIANGULO: %.3lf\n",TRIANGULO);
    printf("CIRCULO: %.3lf\n",CIRCULO);
    printf("TRAPEZIO: %.3lf\n",TRAPEZIO);
    printf("QUADRADO: %.3lf\n",QUADRADO);
    printf("RETANGULO: %.3lf\n",RETANGULO);
    return 0;
}