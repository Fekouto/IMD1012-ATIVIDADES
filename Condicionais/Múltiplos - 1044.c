#include <stdio.h>
 
int main() {
    int A,B;
    scanf("%d %d",&A,&B);
    if(B>A){
        int valor = A;
        A=B;
        B=valor;
    }
    if(A%B==0){
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }
    
    return 0;
}
