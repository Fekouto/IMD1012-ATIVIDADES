#include <stdio.h>
 
int main() {
 
int codigo_1,codigo_2,quantidade_1,quantidade_2;
float valor_1,valor_2;

scanf("%d %d %f",&codigo_1,&quantidade_1,&valor_1);
scanf("%d %d %f",&codigo_2,&quantidade_2,&valor_2);

printf("VALOR A PAGAR: R$ %.2f\n",(quantidade_1*valor_1)+(quantidade_2*valor_2));

    return 0;
}