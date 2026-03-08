// 02 - 006: TỔNG CÁC SỐ CHẴN
#include <stdio.h>
int main() {
    int n;
    long long s;
    scanf("%d", &n);
    s = 1LL * n * (n + 1);
    printf("%lld", s);
    return 0;
}