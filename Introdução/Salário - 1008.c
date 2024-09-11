#include <stdio.h>

int main()
{

    int funcionario, horas;
    float diaria;

    scanf("%d", &funcionario);
    scanf("%d", &horas);
    scanf("%f", &diaria);

    printf("NUMBER = %d\n", funcionario);
    printf("SALARY = U$ %.2f\n", horas * diaria);

    return 0;
}