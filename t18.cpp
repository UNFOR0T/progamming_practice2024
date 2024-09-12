#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("n 값을 입력하세요: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

    return 0;
}