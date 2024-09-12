#include <stdio.h>

int main() {
    int n = 0;

    printf("n 값을 입력하세요: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= 9; i++) {
        int result = n * i;
        printf("%d x %d = %d\n", n, i, result);
        
    }
  

    return 0;
}