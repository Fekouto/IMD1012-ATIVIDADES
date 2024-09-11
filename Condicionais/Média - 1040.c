#include <stdio.h>
 
int main() {
    float v1,v2,v3,v4,v5;
    float media;
    
    scanf("%f %f %f %f",&v1,&v2,&v3,&v4);
    media = (2*v1 + 3*v2 + 4*v3 + 1*v4)/10;
    
    if (media >= 7.0){
        printf("Media: %.1f\nAluno aprovado.\n",media);
    }
    else if (media < 5.0){
        printf("Media: %.1f\nAluno reprovado.\n",media);
    }
    else {
        printf("Media: %.1f\nAluno em exame.\n",media);
        scanf("%f",&v5);
        printf("Nota do exame: %.1f\n",v5);
        media=(media+v5)/2;
        if(media>=5.0){
            printf("Aluno aprovado.\nMedia final: %.1f\n",media);
        }
        else{
            printf("Aluno reprovado.\nMedia final: %.1f\n",media);
        }
    }   
        
        
    return 0;
}