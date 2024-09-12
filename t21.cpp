#include <stdio.h>

int main() {
    int n, sum = 0, sum_even = 0, sum_odd = 0;

    printf("n 값을 입력하세요: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    for (int i = 1; i <= n; i += 2) {
        sum_odd += i;
    }

    for (int i = 2; i <= n; i += 2) {
        sum_even += i;
    }

    printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
    printf("1부터 %d까지의 홀수의 합은 %d입니다.\n", n, sum_odd);
    printf("1부터 %d까지의 짝수의 합은 %d입니다.\n", n, sum_even);

    return 0;
}