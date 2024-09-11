#include <stdio.h>
 
int main() {
    int x;
    double y,resultado;
    scanf("%d",&x);
    scanf("%lf",&y);
    resultado = x/y;
    printf("%.3lf km/l\n",resultado);
    
    return 0;
}