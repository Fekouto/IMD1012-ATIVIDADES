#include <stdio.h>
int main(){
  int maior=1,menor=1,auxi;
  while(maior>0 && menor>0){
    int soma=0;
    scanf("%d %d",&maior,&menor);
    if(menor>maior){
      auxi=maior;
      maior=menor;
      menor=auxi;
    }
    if(maior<1 || menor<1){
        break;
    }
    for(;menor<=maior;menor++){
      soma+=menor;
      printf("%d ",menor);
    }
    printf("Sum=%d\n",soma);
  }
  return 0;
}