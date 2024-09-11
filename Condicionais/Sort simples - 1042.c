#include <stdio.h>

int main() {
    int v1, v2, v3,c1,c2,c3;
    scanf("%d %d %d", &v1, &v2, &v3);
    c1=v1;
    c2=v2;
    c3=v3;

    if (v1 > v2) {
        int temp = v1;
        v1 = v2;
        v2 = temp;
    }
    if (v2 > v3) {
        int temp = v2;
        v2 = v3;
        v3 = temp;
    }
    if (v1 > v2) {
        int temp = v1;
        v1 = v2;
        v2 = temp;
    }

    printf("%d\n%d\n%d\n\n", v1, v2, v3);
    printf("%d\n%d\n%d\n", c1, c2, c3);

    return 0;
}
