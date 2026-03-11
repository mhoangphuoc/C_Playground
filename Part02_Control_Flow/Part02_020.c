// 02 - 020: KIỂM TRA SỐ HOÀN HẢO
#include <stdio.h>
int main() {
    short t;
    long long n;
    scanf("%hd" , &t);
    for (short caseT = 1; caseT <= t; caseT++) {
        scanf("%lld", &n);
        if (n == 1) {
            printf("NO\n");
            continue;
        }
        long long temp = 1;
        for (long long i = 2; i <= n/i; i++) {
            if (i * i == n) {
                temp += i;
                continue;
            }
            if (n % i == 0) {
                temp += i + n/i;
                if (temp > n) break;
            }
        }
        printf("%s\n", (temp == n) ? "YES" : "NO");
    }
    return 0;
}