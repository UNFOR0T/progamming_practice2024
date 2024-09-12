#include <stdio.h>

int main() {
    int n1, n2, n3;
    int sum = 0; 


    printf("n1, n2, n3 값을 입력하세요: ");
    scanf_s("%d %d %d", &n1, &n2, &n3);

    printf("%d부터 %d까지의 %d의 배수: \n", n1, n2, n3);
    for (int i = n1; i <= n2; i++) {
        if (i % n3 == 0) { 
            printf("%d\n", i);
            sum += i; 
        }
    }
    printf("배수의 합: %d\n", sum);

    return 0;
}
