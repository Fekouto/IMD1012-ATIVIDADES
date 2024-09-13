#include <stdio.h>

int main(void) {
  int rep,auxi2=0,auxi3=0,auxi4=0,auxi5=0;
  scanf("%d", &rep);
  for(int i = 0; i < rep; i++){
    int valor;
    scanf("%d", &valor);
    if(valor%2==0){
      auxi2++;
    }
    if(valor%3==0){
      auxi3++;
    }
    if(valor%4==0){
      auxi4++;
    }
    if(valor%5==0){
      auxi5++;
    }
  }
  printf("%d Multiplo(s) de 2\n", auxi2);
  printf("%d Multiplo(s) de 3\n", auxi3);
  printf("%d Multiplo(s) de 4\n", auxi4);
  printf("%d Multiplo(s) de 5\n", auxi5);
  return 0;
}