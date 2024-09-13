#include <stdio.h>
 
int main() {
    int rep,valor;
    scanf("%d",&rep);
    for(int i=0;i<rep;i++){
        scanf("%d",&valor);
        if(valor>2015){
            printf("%d A.C.\n",(valor-2014));
        }
        if(valor==2015){
            printf("1 A.C.\n");
        }
        if(valor<2015){
            printf("%d D.C.\n",(2015-valor));
        }
    }
    return 0;
}