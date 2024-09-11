#include <stdio.h>
 
int main() {
    int codigo,quantidade;
    double valor=0;
    scanf("%d %d",&codigo,&quantidade);
    if(codigo == 1){
        valor=4*quantidade;
    }
    else if(codigo == 2){
        valor=4.50*quantidade;
    }
    else if(codigo == 3){
        valor=5*quantidade;
    }
    else if(codigo == 4){
        valor=2*quantidade;
    }  
    else if(codigo == 5){
        valor=1.50*quantidade;
    } 
    printf("Total: R$ %.2lf\n",valor);
    return 0;
}