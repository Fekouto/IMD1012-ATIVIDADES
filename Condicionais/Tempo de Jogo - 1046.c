#include <stdio.h>
 
int main() {
    int hora_inicial,hora_final,duracao;
    scanf("%d %d",&hora_inicial,&hora_final);
    if(hora_inicial>=hora_final){
        hora_inicial=24-hora_inicial;
        duracao=hora_inicial+hora_final;
    } else{
        duracao=hora_final-hora_inicial;
    }
    printf("O JOGO DUROU %d HORA(S)\n",duracao);
    return 0;
}