#include <stdio.h>
#include <math.h>
 
int main() {
    double x_1,x_2;
    double y_1,y_2;
    scanf("%lf %lf",&x_1,&y_1);
    scanf("%lf %lf",&x_2,&y_2);
    double x_0 = pow(x_2-x_1,2);
    double y_0 = pow(y_2-y_1,2);
    double resultado = sqrt(x_0 + y_0);
    printf("%.4lf\n",resultado);
    return 0;
}