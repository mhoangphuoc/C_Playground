// 02 -021: KIỂM TRA SỐ ĐỐI XỨNG
#include <stdio.h>
int main() {
    short t;
    long long n;
    scanf("%hd", &t);
    for (short caseT = 1; caseT <= t; caseT++) {
        scanf("%lld", &n);
        if (n % 10 == 0) { // nếu đề cho n (0 <= n <= 10^18 thì phải thêm điều kiện n != 0, vì 0 cũng là một số đối xứng) 
            printf("NO\n");
            continue;
        }
        if (n < 10) {
            printf("YES\n");
            continue;
        }
        long long rev = 0;
        while (rev < n) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        if (n == rev || n == rev/10) {
            printf("n = %lld | rev = %lld\n", n, rev);
            printf("YES\n");
        } else {
            printf("n = %lld | rev = %lld\n", n, rev);
            printf("NO\n");
        }
    }
    return 0;
}