#include <stdio.h>
 
int main() {
    double raio,volume;
    scanf("%lf",&raio);
    volume=(4*raio*raio*raio*3.14159)/3;
    printf("VOLUME = %.3lf\n",volume);
    
    return 0;
}