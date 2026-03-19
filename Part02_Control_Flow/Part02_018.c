// 018: PHÂN TÍCH THỪA SỐ NGUYÊN TỐ
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    if (n > 1) {
        printf("%d", n);
    }
    printf("\n");
    return 0;
}