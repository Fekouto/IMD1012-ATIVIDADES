#include <stdio.h>

int main() {
  int x,y,num_auxiliar,somatorio=0;
  scanf("%d %d",&x,&y);
  //y sendo maior valor
  if(x>y){
    num_auxiliar = y;
    y=x;
    x=num_auxiliar;
  }
  x++;
  for(;x<y;++x){
    if(x%2!=0){
      somatorio+=x;
    }
    
  }
  printf("%d\n",somatorio);
  return 0;
}