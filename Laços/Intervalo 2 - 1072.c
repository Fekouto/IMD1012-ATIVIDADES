#include <stdio.h>

int main() {
    int repeticao;
    int variavel;
    int in=0,out=0;
    scanf("%d",&repeticao);
    for (int i=0;i<repeticao;++i){
        scanf("%d",&variavel);
        if(10<=variavel && variavel<=20){
            in++;
        }
        else{
            out++;
        }
    }
    printf("%d in\n%d out\n",in,out);
    return 0;
}