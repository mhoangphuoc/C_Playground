// 02 - 019: THỪA SỐ NGUYÊN TỐ THỨ K
#include <stdio.h>
int main() {
    int n, k, count = 0;
    scanf("%d %d", &n, &k);
    for (int i = 2; i <= n/i; i++) {
        while (n % i == 0) {
            n /= i;
            count++;
            if (count == k) {
                printf("%d\n", i);
                return 0;
            }
        }
    }
    if (n > 1 && ++count == k) {
        printf("%d\n", n);
        return 0;
    }
    printf("-1\n");
    return 0;
}