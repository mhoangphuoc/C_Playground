// 02 - 025: KIỂM TRA SỐ STRONG
#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int temp = n;
    do {
        int fac = 1;
        int dig = temp%10;
        for (int i = 1; i <= dig; i++) {
            fac *= i;
        }
        sum += fac;
        if (sum > n) break;
        temp /= 10;
    } while (temp != 0);
    printf("%d", sum == n ? 1 : 0);
    return 0;
}