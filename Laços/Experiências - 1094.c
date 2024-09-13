#include <stdio.h>

int main() {
  int loop,fantasma,total=0,c=0,r=0,s=0;
  char auxiliar;
  scanf("%d",&loop);
  for(int i=0;i<loop;++i){
    scanf("%d %c",&fantasma,&auxiliar);
    if(auxiliar=='C'){
      c+=fantasma;
    }
    else if (auxiliar=='R'){
      r+=fantasma;
    }
    else if (auxiliar=='S'){
      s+=fantasma;
    }
    total+=fantasma;
  }
  printf("Total: %d cobaias\n",total);
  printf("Total de coelhos: %d\n",c);
  printf("Total de ratos: %d\n",r);
  printf("Total de sapos: %d\n",s);
  printf("Percentual de coelhos: %.2f %%\n",(float)c/total*100);
  printf("Percentual de ratos: %.2f %%\n",(float)r/total*100);
  printf("Percentual de sapos: %.2f %%\n",(float)s/total*100);
  
    return 0;
}