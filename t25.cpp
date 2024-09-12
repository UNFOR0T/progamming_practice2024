#include <stdio.h>

int main() {

    int i, n = 0;
    printf("n의 값을 입력하시오. : ");
    scanf_s("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) printf("%d ", i);
    }
}
