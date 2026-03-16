// 02 - 022: KIỂM TRA SỐ CHÍNH PHƯƠNG
#include <stdio.h>
#include <math.h>
int main() {
    short t;
    scanf("%hd", &t);
    for (short caseT = 1; caseT <= t; caseT++) {
        long long n, ans = 0, low = 1LL, high = 1000000000LL;
        scanf("%lld", &n);
        while (low <= high) {
            long long temp = low + (high - low) / 2;
            if (temp <= n / temp) {
                ans = temp; 
                low = temp + 1; 
            } else {
                high = temp - 1;
            }
        }
        printf("%s", ans * ans == n ? "YES\n" : "NO\n");
    }
    return 0;
}