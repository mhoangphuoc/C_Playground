// 02 - 016: KIỂM TRA SỐ NGUYÊN TỐ
#include <stdio.h>
int main() {
    int n, count = 0;
    scanf("%d", &n);
    if (n < 2) {
        printf("0\n");
    } else {
        for (int i = 2; i*i <= n; i++) {
            if (n % i == 0) {
                count = 1;
                break;
            }
        }
        printf("%d", count == 1 ? 0 : 1);
    }
    return 0;
}