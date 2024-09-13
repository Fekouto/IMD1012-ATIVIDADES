#include <stdio.h>
int main(){
    int rep;
    scanf("%d",&rep);
    for(int i=0;i<rep;i++){
        int pa,pb,auxi,y=1;
        double ga,gb;
        scanf("%d %d %lf %lf",&pa,&pb,&ga,&gb);
        while(pa<=pb){
            pa=(int)pa*(1+ga/100);
            pb=(int)pb*(1+gb/100);
            auxi=y;
            y++;
            if(auxi>100){
                printf("Mais de 1 seculo.\n");
                auxi=-1;
                break;
            }
        }
        if(auxi==-1){
            printf("");
        }else{
            printf("%d anos.\n",auxi);
        }
        

    }
    return 0;
}