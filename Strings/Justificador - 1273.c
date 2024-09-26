#include <stdio.h>
#include <string.h>

int main() {
    int N, i, maxLen, len;
    char words[50][51];
    int isFirst = 1; 

    while (1) {
        scanf("%d", &N);
        if (N == 0) break;

        maxLen = 0;
        for (i = 0; i < N; i++) {
            scanf("%s", words[i]);
            len = strlen(words[i]);
            if (len > maxLen) maxLen = len;
        }

        if (!isFirst) { 
            printf("\n");
        }
        isFirst = 0; 

        for (i = 0; i < N; i++) {
            len = strlen(words[i]);
            printf("%*s\n", maxLen, words[i]);
        }
    }

    return 0;
}