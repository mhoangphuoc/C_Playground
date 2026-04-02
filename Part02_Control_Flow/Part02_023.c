// 02 -  023: TỔNG SỐ LƯỢNG CÁC ƯỚC SỐ LÀ LẺ
#include <stdio.h>
int main() {
    short t;
    scanf("%hd", &t);
    for (short caseT = 1; caseT <= t; caseT++) {
        long long n;
        scanf("%lld", &n);
        long long low = 1L, high = 1000000000L;
        long long ans = 0;
        while (low <= high) {
            long long temp = low + (high - low)/2;
            if (temp <= n/temp) {
                ans = temp;
                low = temp + 1;
            } else high = temp - 1;
        }
        printf("%s", ans * ans == n ? "YES\n": "NO\n");
    }
    return 0;
}