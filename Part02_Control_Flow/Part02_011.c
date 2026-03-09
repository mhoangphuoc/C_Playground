// 02 - 011: TỔNG CÁC ƯỚC SỐ
#include <stdio.h>
int main() {
    short t;
    int n;
    long long sum;
    scanf("%hd", &t);
    for (int i = 1; i <= t; i++) {
        sum = 0;
        scanf("%d", &n);
        for (int a = 1; (1LL*a*a) <= n; a++) {
            if (n%a == 0) {
                sum += 1LL * a;
                if (a != n/a) {
                    sum += n/a;
                }
            }
        } printf("%lld\n", sum);
    }
    return 0;
}