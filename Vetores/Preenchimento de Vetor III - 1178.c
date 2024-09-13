#include <stdio.h>

int main() {
  double valor;
  scanf("%lf", &valor);
  double vetor[100];
  vetor[0] = valor;
  for(int i = 1; i <100; i++) {
    vetor[i] = vetor[i-1] / 2;
  }
  for(int i = 0; i < 100; i++) {
    printf("N[%d] = %.4f\n",i, vetor[i]);
  }
  return 0;
}