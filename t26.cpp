#include <stdio.h>

int main() {

    int i,j,n = 0;
    printf("자연수 입력: ");
    scanf_s("%d", &n);

    for (i = n; i >= 1; i--) {
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

