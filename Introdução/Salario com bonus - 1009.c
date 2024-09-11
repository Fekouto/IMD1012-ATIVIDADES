#include <stdio.h>
 
int main() {
 
char nome;
float salario,vendas;

scanf("%s",&nome);
scanf("%f",&salario);
scanf("%f",&vendas);

printf("TOTAL = R$ %.2f\n", salario+vendas*0.15);
 
    return 0;
}