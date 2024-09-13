#include <stdio.h>

long long int fibonacci(int valor) {
  long long int fib[valor + 1];
  fib[0] = 0;
  fib[1] = 1;
  for (int i = 2; i < valor + 1; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  return fib[valor];
}

int main(void) {
  int rep;
  scanf("%d", &rep);
  for(int i = 0; i < rep; i++) {
    int numero;
    scanf("%d", &numero);
    long long int resultado = fibonacci(numero);
    printf("Fib(%d) = %lld\n", numero, resultado);
  }
  return 0;
}
