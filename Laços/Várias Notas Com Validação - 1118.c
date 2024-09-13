#include <stdio.h>

int main() {
  for(int i=0;i<1;){
    int auxi;
    float nota,media=0;
    for(int y=0;y<2;){
      scanf("%f",&nota);
      if(nota<0 || nota>10){
        printf("nota invalida\n");
        continue;
      }else{
        media+=nota;
        y++;
      }
    }
    printf("media = %.2f\n",media/2);
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&auxi);
    while(auxi!=1 && auxi!=2){
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d",&auxi);
      
    }
    if(auxi==1){
      continue;
    }
    if (auxi==2){
      break;
    }
  }
  return 0;
}